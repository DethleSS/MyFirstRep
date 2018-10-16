#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED
#include <iostream>
#include "algorithms.h"
#include "predicates.h"
struct Pair
{
    int first;
    int second;
};
Pair task_1 (int* array, int first, int last)
{
     res.first =average(array, first, last );
    //std::cout << res_1 << std::endl;
     res.second =search(array, first, last, greater_);
    //std::cout << res_2;

    for(; first != last; ++first)
    {
        if( res )
        {
            std::cout << array[first] << std::endl;
        }
    }


}


#endif // TASK_H_INCLUDED
