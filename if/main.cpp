#include <iostream>
#include "predicate.h"
#include "person.h"
#include "book.h"
#include <utility>

template<class Iterator,class BinaryPredicate>
Iterator search_(Iterator first, Iterator last, BinaryPredicate p)
{
    Iterator element = first++;
    for(; first != last; ++first)
    {
        if(p(*first, *element))
        {
            element = first;

        }
    }
    return element;
}
template<class BinaryPredicate>
void bubble_sorts(Person* arr ,int first, int last, BinaryPredicate p)
{
    for(int i = first;i < last; ++i)
    {
        for(int j = 0;j < last - 1 - i; ++j)
        {
            if(p(arr[j],arr[j+1]))
            {
                std::swap(arr[j],arr[j+1]);
            }
        }
    }
}




int main()
{

    Person arr[7]{Person("Alexey", "Grom", 10),
    Person("Valik", "Kashko", 5),
    Person("Timofey", "Zarenok", 16),
    Person("Evfrosinia", "Dankova ", 7),
    Person("Nikita","Bodrov", 12),
    Person("Nikita","Dovydov", 7),
    Person("Alina","Zarenok",19)};

    Book books[4]{Book(arr[0],"Grozniy",155),Book(arr[1],"Net Macbookam",92),Book(arr[2],"Sorts",10),Book(arr[3],"Da Macbookam",987)};
    Person* result = search_(arr, arr+3, age_greater);
    Book* result_ = search_(books,books+4, max_pages);
    Person* result2 = search_(arr, arr + 3,lexical_grater_name);
    Person* result3 = search_(arr, arr + 3,lexical_grater_surename);
    std::cout<< "big boss --> " << (*result).name <<std::endl;
    std::cout << "Bigest book -->" << result_->name <<std::endl;
    std::cout << "Name -->" << result2->name <<std::endl;
    std::cout << "Surname -->" << result3->surename <<std::endl;
    bubble_sorts(arr,0,7,lexical_grater_surename);
    bubble_sorts(arr,0,7,greater_surename_name);

    for(int i = 0;i < 7; ++i)
    {
        arr[i].print();
    }

    return 0;
}
