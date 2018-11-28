#ifndef TASK_ARRAY_H_INCLUDED
#define TASK_ARRAY_H_INCLUDED
#include "algoritms.h"

template <typename Iterator>
void array_1(Iterator first, Iterator last)
{
    for(; first < last; ++first)
    {
        if((*first% 2 == 1) && *first > 0)
        {
            std::cout << *first <<std::endl;
        }
    }
}

template <typename Iterator>
void array_2(Iterator first, Iterator last)
{
    for(; first < last; ++first)
    {
        std::cout <<pow (2, *first) <<std::endl;
    }
}

template <typename Iterator, typename T>
void array_3(Iterator first, Iterator last, T a, T d)
{
    for(; first < last; ++first)
    {
        std::cout << a + (*first * d) <<std::endl;
    }
}

template <typename Iterator, typename T>
void array_4(Iterator first, Iterator last, T a, T d)
{
    for(; first < last; ++first)
    {
        std::cout << a + pow(d, *first) <<std::endl;
    }
}

template <typename Iterator>
void array_5(Iterator first, Iterator last)
{
    *first++ = 0;
    *first++ = 1;
    for(; first <= last; ++first)
    {
        *first += *(first - 1) + *(first - 2);
    }
}

template <typename Iterator>
void array_6(Iterator first, Iterator last, int a, int b)
{
    *first++ = a;
    *first++ = b;
    for(;first < last; ++first)
    {
        *first += *(first - 1) + *(first - 2 );

    }
}

template <typename Iterator>
void array_7(Iterator first, Iterator last)
{
    for(;first <= last; --last)
    {
        std::cout << *last <<std::endl;
    }
}

template <typename Iterator>
void array_8(Iterator first, Iterator last)
{
    int k = 0;
    for(; first < last; ++first)
    {
        if(*first %2 == 1)
        {
            std::cout << *first <<std::endl;
            ++k;
        }

    }
    std::cout<< k;
}

template <typename Iterator>
void array_9(Iterator first, Iterator last)
{
    int k = 0;
    for(; first <= last ; --last)
    {
        if(*last%2 == 0)
    {
        std::cout << *last <<std::endl;
        ++k;
    }
    }
    std::cout<< k;
}

template <typename Iterator>
void array_10(Iterator first, Iterator last)
{
    Iterator first1 = first;

    for(; first < last; ++first)
    {
        if(*first%2 == 0)
        {
            std::cout << *first <<std::endl;
        }
    }
    for(; first1 <= last; --last)
    {
        if(*last% 2 == 1)
        {
            std::cout<< *last <<std::endl;
        }
    }
}

template <typename Iterator>
void array_12(Iterator first, Iterator last)
{
    for(; first < last; first+=2)
    {
        std::cout<< *first <<std::endl;
    }
}

template <typename Iterator>
void array_13(Iterator first, Iterator last)
{
    for(; first <= last; last -= 2)
    {
        std::cout << *last << std::endl;
    }
}

template <typename Iterator>
void array_14(Iterator first, Iterator last)
{
    Iterator first1 = first + 1;
   for(;first  <= last; first +=2)
   {
       std::cout<< *first <<std::endl;
   }
   for(;first1  <= last; first1 +=2)
   {
       std::cout<< *first1 <<std::endl;
   }
}

template <typename Iterator>
void array_15(Iterator first, Iterator last)
{
    Iterator first1 = first - 1;
    Iterator last1 = last - 1;

    for(;first  <= last; first +=2)
   {
       std::cout<< *first <<std::endl;
   }

   for(;first1 <= last1 ; last1 -=2)
   {
       std::cout << *last1 <<std::endl;
   }

}

template <typename Iterator>
void array_16(Iterator first, Iterator last)
{
    for(; first <= last;  ++first, --last)
    {
        std::cout<< *first <<std::endl;
        std::cout<< *last <<std::endl;
    }
}

/*template <typename Iterator>
void array_17(Iterator first, Iterator last)
{
    for(int i = 0; i != 10; ++i)
    {
        for(; )
    }
}*/

template <typename Iterator>
void array_18(Iterator first, Iterator last)
{
    for(; first < last; ++first)
    {
        if(*first < 10)
        {
            std::cout<< *first <<std::endl;
            return ;
        }
        else
        {
            std::cout<< 0 <<std::endl;
        }
    }
}

template <typename Iterator>
void array_19(Iterator first, Iterator last)
{
int temp = *first;
    for(; first < last; ++first)
    {
        if(*first < 10 && *first > 1)
        {
            temp++;
            std::cout<< temp <<std::endl;
            return ;
        }
        else
        {
            temp++;
            std::cout<< 0 <<std::endl;
        }
    }
}

/*template <typename Iterator>
int array_20(Iterator first, Iterator last)
{
    for(;first != last; ++first)
    {
         stu::accumulate(*first, *last);
    }


}*/

void run_tasks_array()
{
    int array[]{1,2,3,4,5,6,7,8,9,10};
//     array_17(array, array + 10);
};
#endif // TASK_ARRAY_H_INCLUDED
