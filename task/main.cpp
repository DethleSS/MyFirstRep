#include <iostream>
#include "algorithms.h"
#include "function.h"
#include "fuctor.h"
#include <iostream>
void f(const Fraction& a1, const Fraction& b1)
{

}
int main()
{
    //Fraction array[4]{Fraction(1,7), Fraction(2,5), Fraction(11,2), Fraction(13,2)};
    //Fraction result = stu::accumulate(array, array + 4, Fraction(1,1));
    //Fraction* result = stu::min_element(array, array + 4, greater<Fraction>);
    //result->print();
    /*FractionCreator creator;
    for(int i = 0; i < 10; ++i)
    {
    Fraction a = creator();
    a.print();
    }*/
    int arr[5]{};
    FillArray a;
    stu::for_each(arr, arr + 5, FillArray());
    stu::for_each(arr, arr + 5, [](int a){std::cout<< a <<" ";});
    //Fraction a(1,2);
    //Fraction b(1,2);
    //Fraction c = b;
    //f(a,b);
    //std::cout << (a != b);
    //Fraction c = a+b;
    //a.print();
    //c.print();
    //a.operator*(b);
    //b.operator*(a);
    //operator*(&a, b);
    //a.set_num(0);
    //a.m_denum = 0;
    //a.set_denum(0);
    return 0;
}
