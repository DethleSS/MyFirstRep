//
//  tasks.h
//  BGUIR_LABS
//
//  Created by mb on 13/10/2018.
//  Copyright © 2018 mb. All rights reserved.
//

#ifndef tasks_h
#define tasks_h
#include <iostream>
#include "algorithms.h"
#include "functions.h"
#include "pridicates.h"
#include "my_algorithms.h"
void task_1 (int* array ,int first, int last){
    int p = accumulate(array,first,last,0,sum_positive);
    int p1 = accumulate(array,first,last,1,mul_negative);
    std::cout << p << " " << p1 << std::endl;
}
void task_2 (int* array ,int first, int last){
    int p = accumulate(array,first,last,0,sum_negative);
    int p1 = accumulate(array,first,last,1,mul_even);
    std::cout << p << " " << p1 << std::endl;
}
void task_3 (int* array ,int first, int last){
    int p = accumulate(array,first,last,0,sum_negative);
    int p1 = accumulate(array,first,last,0,sum_positive);
    std::cout << p1 - p << std::endl;
}
void task_4 (int*array, int first,int last)
{
    int ind1 = search(array,first,last,less_);
    int ind2 = search(array,first,last,greater_);

    std::cout << array[ind1]+array[ind2] ;
}

void task_5 (int*array, int first,int last)
{
    int av = average(array,first,last);
    print_if(array,first,last,av,less_);


}
void task_6 (int*array, int first,int last)
{
    int ind1 = search(array,first,last,less_);
    int ind2 = search(array,first,last,greater_);

    std::cout << ind1 <<" "<<ind2;
}






#endif /* tasks_h */
