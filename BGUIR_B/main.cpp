#include <iostream>



int main()
{
    int array[5]{2,4,1,5,3};
    bubble_sort(array,5,greater_);
    for(auto i:array)
    {
        std::cout << i;
    }
    return 0;
}
