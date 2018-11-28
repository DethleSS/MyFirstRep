#ifndef TASK_BOOLEAN_H_INCLUDED
#define TASK_BOOLEAN_H_INCLUDED

bool is_positiv(int a) // boolean_1
{
    return a > 0;
}

bool is_not_even(int a) // boolean_2
{
    return a % 2 != 0;
}

bool is_even(int a) // boolean_3
{
    return a % 2 != 0;
}

bool boolean_4(int a, int b)
{
    return a > 2 && b <= 3;
}

bool boolean_5(int a, int b)
{
    return a >= 0 || b < -2;
}

bool boolean_6(int a, int b, int c)
{
    return a < b && b < c;
}

template <class T>
bool  boolean_7(T a, T b, T c)
{
    return  a < b && b < c;
}

bool boolean_8(int a, int b)
{
    return a % 2 != 0 && b % 2 != 0;
}

bool one_is_not_even_9(int a, int b) // boolean_9
{
    return a % 2 != 0 || b % 2 != 0;
}

bool one_is_not_even_10(int a, int b) // boolean_10
{
    return (a % 2 != 0) ^ (b % 2 != 0);
}

template <class T>
bool boolean_11(int a, int b)
{
    return a % 7 == 0 && b % 7 == 0;
}

bool all_positiv(int a, int b, int c) // boolean_12
{
    return a > 0 && b > 0 && c > 0;
}

bool boolean_13(int a, int b, int c)
{
    return a > 0 || b > 0 || c > 0;
}

bool boolean_14(int a, int b, int c)
{
    return (a > 0) ^ (b > 0) ^ (c > 0);
}

bool boolean_15(int a, int b, int c)
{
    return (a > 0) && (b > 0) ^ (c > 0);
}

bool boolean_16(int a)
{
    return a % 2 == 0 && a > 9 && a < 100;
}

bool boolean_17(int a)
{
    return a % 2 != 0 && a > 99 && a < 1000;
}

bool boolean_18(int a, int b, int c)
{
    return a == b || b == c || a == c;
}

bool boolean_19(int a, int b, int c)
{
    return a == -b || b == -c || a == -c;
}

bool boolean_20(int value)
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return a;
}

bool boolean_21(int value)
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b && b > a;
}

bool boolean_22(int value)
{
    int a = value % 10;
    int b = (value / 10) % 10;
    int c = (value / 100);
    return c > b > a || c < b < a;
}

bool boolean_23(int a)
{
    int temp = a;
    int b = 0;
    while (temp != 0)
    {
          b = b * 10 + temp % 10;
          temp /= 10;
    }
    if (a == b)
    {
        return true;
    }
        return false;
}

void run_tasks_boolean()
{
    //std::cout << boolean_21(43);
};

#endif // TASK_BOOLEAN_H_INCLUDED
