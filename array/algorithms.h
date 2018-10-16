#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include "predicates.h"
template <typename BinaryPridicate>
int search(int* array,int first,int last,BinaryPridicate op)
{
    int element = array[first];

    for(;first<last;++first)
    {
        if(op(array[first],element))
        {
            element = array[first];

        }

    }
    return element;
}

int accumulate(int* array, int first, int last){
    int temp = 0;
    for (;first<last;++first){
        temp += array[first];
    }
    return temp;
}

int average(int*array,int first,int last)
{
    int temp = accumulate(array,first,last);
    return temp/last;

}



#endif // ALGORITHMS_H_INCLUDED
