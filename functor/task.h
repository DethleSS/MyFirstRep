#ifndef TASK_H_INCLUDED
#define TASK_H_INCLUDED
#include "algoritms.h"
#include <ctime>
#define Containers int arr[10]{1100, 100, 10, 10, 10, 10, 10, 10, 110, 5}
void f_18()
{
    Containers;
    std::cout<< "Task_18" <<std::endl;
    stu::for_each(arr, arr + 10, [](int a)
    {
        std::cout << a << " ";
    });
    int temp = arr[9];
    int* result = stu::find_if(arr, arr + 10, [temp](int a)
    {
        return a < temp;
    });
    std::cout <<" \n "<< *result;
}

void egor_18()
{
    Containers;
    auto first = std::rbegin(arr);
    auto last = std::rend(arr);
    stu::for_each(first, last, [](int a)
    {
        std::cout << a << " ";
    });
}

void f_18_1()
{
    Containers;
    std::cout<< "Task_18.1" <<std::endl;
    auto first = std::rbegin(arr);
    auto last = std::rend(arr);
    stu::for_each(first, last, [](int a)
    {
        std::cout << a << " ";
    });
    int temp = arr[9];
    int* result = stu::find_if(arr, arr + 10, [temp](int a)
    {
        return a < temp;
    });
    std::cout << " \n "<< *result <<std::endl;
    std::cout << "Egor do don't hit me ";
}

void f_19()
{
    Containers;
    std::cout<< "Task_19" <<std::endl;
    auto first = std::rbegin(arr);
    auto last = std::rend(arr);
    int temp1 = arr[0];
    int temp2 = arr[9];
    auto result = stu::find_if(first, last, [temp1,temp2](int a)
    {
        return a < temp1 && a > temp2;
    });
    if(result == last)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << " \n "<< *result <<std::endl;
        std::cout << "Egor please don't hit me ";
    }
}

void f_20()
{
    Containers;
    std::cout<< "Task_20" <<std::endl;
    auto first = std::begin(arr);
    auto last = std::end(arr);
    int result = stu::accumulate(first, last, 0);
    std::cout << " \n "<< result <<std::endl;
    std::cout << "Egor do don't hit me ";

}

void f_1()
{
    Containers;
    std::cout << "Task_1" <<std::endl;
    auto first = std::begin(arr);
    auto last = std::end(arr);
    stu::for_each(first, last, [] (int& a)
    {
        a += 10;
    });
    stu::for_each(first, last, [] (int a)
    {
        std::cout<< a <<" ";
    });

}

void f_2()
{
    Containers;
    std::cout << "Task_2" <<std::endl;
    stu::for_each(arr, arr + 10, [](int& a)
    {
        std::cin >> a;
    });
    stu::for_each(arr, arr + 10, [] (int a)
    {
        if(a %2 == 0)
        {
            std::cout<< a <<" ";
        }
    });

}

void f_3()
{
    Containers;
    std::cout << "Task_3" <<std::endl;
    stu::for_each(arr,arr + 10, [](int& a){std::cin >> a;});
    stu::for_each(arr, arr + 10, [](int a){if(a %2 == 0){std::cout << a <<std::endl;}});
}

void f_4()
{
    Containers;
    std::cout << "Task_4" <<std::endl;
    srand(time(0));
    stu::for_each(arr,arr + 1000,[](int& a){a = rand() %11 + 4;});
    stu::for_each(arr + 765, arr + 949, [](int a){std::cout << a <<std::endl;});

}

void f_5()
{
    Containers;
}
void run_all_tasks()
{
    f_4();
}
#endif // TASK_H_INCLUDED
