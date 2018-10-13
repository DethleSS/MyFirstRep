#ifndef MY_ALGORITHMS_H_INCLUDED
#define MY_ALGORITHMS_H_INCLUDED
#include "algorithms.h"
using BinaryPridicate = bool (*) (int,int);

int average(int*array,int first,int last)
{
    int temp = accumulate(array,first,last);
    return temp/last;

}
void print_if(int* array,int first,int last,int value ,BinaryPridicate p)
{
    for(;first<last;++first)
    {
        if(p(array[first],value))
        {
            std::cout << array[first];
        }
    }
}



#endif // MY_ALGORITHMS_H_INCLUDED
