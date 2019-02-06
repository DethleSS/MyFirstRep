#include <iostream>
#include "algorithms.h"

int main()
{
    int arr[5]{5,4,4,2,1};
    std::cout << stu::count_if(arr,arr + 5, is_even);


    return 0;
}
