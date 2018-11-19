#ifndef TASK_INTEGER_H_INCLUDED
#define TASK_INTEGER_H_INCLUDED
#include <iostream>

int integer_1(int value)
{
    return value / 100;
}

int integer_2(int m)
{
  return m / 1000;
}

int integer_3(int byte)
{
    return byte / 1024;
}

int integer_4(int a, int b)
{
    return a / b;
}

int integer_5(int a, int b)
{
    return a % b;
}

int integer_6(int value)
{
    return (value / 10) % 10 && value % 10;
}

int integer_7(int value)
{
    int temp = 0;
    for(; value != 0; value = value / 10)
    {
        temp += value % 10;
    }
    return temp;
}

template <typename T>
int integer_8(T value)
{
    T a = value / 10;
    T b = value % 10;
    return b && a;
}

int integer_9(int value)
{
    return value / 100;
}

int integer_10(int a)
{
    return a % 10 && (a / 10) % 10;
}

void integer_12(int value)
{
    for(int i = value % 10; value != 0; value = value / 10, --i)
    {
        std::cout << i;
    }
}

void integer_13(int value)
{
    int first = value / 100;
    std::cout << first << std::endl;
}

void integer_14(int value)
{
    int last = value % 10;
    std::cout << last << std::endl;
}

void integer_15(int value)
{
   int b = value / 100;
   int c = (value / 10) % 10;
   int d = value % 10;
   std::cout << c << b << d;
}

void integer_16(int value)
{
   int b = value / 100;
   int c = (value / 10) % 10;
   int d = value % 10;
   std::cout << b << d << c;
}

int integer_17(int value)
{
    int a = value / 100;
    int b = a % 10;
    return b;
}

int integer_18(int value)
{
    int a = value / 1000;
    int b = a % 10;
    return b;
}

int integer_19(int value)
{
    int minute = value / 60;
    return minute;
}

int integer_20(int value)
{
    int hour = value / 3600;
    return hour;
}

int integer_21(int value)
{
    return value % 60;
}

int integer_22(int value)
{
   return ((value / 60) % 60) * 60;
}

int integer_23(int value)
{
    return (value / 60) % 60;
}

int integer_24(int day)
{
    return day % 7;
}

int integer_25(int day)
{
    return (day + 3) % 7;
}

int integer_26(int day)
{
    return (day + 1) % 7;
}

int integer_27(int day)
{
    return (day + 5) % 7;
}

int integer_28(int day, int n)
{
    return (day + n) % 7;
}

int integer_30(int year)
{
    return (year - 1) / 100 + 1;
}


void run_tasks_integer()
{
    //std::cout << integer_8(12);
};

#endif // TASK_INTEGER_H_INCLUDED
