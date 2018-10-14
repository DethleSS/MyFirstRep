#include <iostream>
#include "algorithms.h"
#include "predicates.h"
template <typename T>
T sum(T a,T b)
{
    return a+b;
}
int main()
{
    int array[5]{10,12,12,16,18};
    bool result = stu::all_of(array,array+5,is_even);
    std::cout << result;

    return 0;
}
