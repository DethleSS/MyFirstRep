#ifndef TASK_FOR_H_INCLUDED
#define TASK_FOR_H_INCLUDED
#include <cmath>

template <class T>
void for_1(T n, T k)
{
    for(int i = 0; i != n; ++i)
    {
        std::cout<< k <<std::endl;
    }
}

template <class T>
void for_2(T a, T b)
{
    T n = 0;
    for(; a <= b; ++a)
    {
        std::cout << a << std::endl;
        ++n;
    }
    std::cout << n;
}

template <class T>
void for_3(T a, T b)
{
    T n = 0;
    for(; a != b; --b)
    {
        std::cout << b <<std::endl;
        ++n;
    }
    std::cout << n;

}

void for_4(double value)
{
    for(int i = 1; i != 10; ++i)
    {
        std::cout << i * value << std::endl;
    }
}

void for_5(double value)
{
    for(double i = 0.1; i <= 1; i += 0.1)
    {
        std::cout << i * value << std::endl;
    }
}

void for_6(double value)
{
    for(double i = 1.2; i <= 2; i += 0.2)
    {
        std::cout << i * value << std::endl;
    }
}

template <class T>
int for_7(T a, T b)
{
    T temp = 0;
    for(; a <= b; ++a)
    {
        temp += a;
    }
    return temp;
}

template <class T>
int for_8(T a, T b)
{
    T temp = 1;
    for(; a <= b; ++a)
    {
        temp *= a;
    }
    return temp;
}

template <class T>
int for_9(T a, T b)
{
    T temp = 0;
    for(; a <= b; ++a)
    {
        temp += pow(a,2);
    }
    return temp;
}

double for_10(int n)
{
    double temp = 0;
    for(double i = 1; i <= n; ++i)
    {
        temp += 1/i;
    }
    return temp;
}

int for_11(int n )
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(n + i, 2);
    }
    return temp;
}

int for_12(double n)
{
    double temp = 1;
    for(double i = 1.1; i <= n; i += 0.1)
    {
        temp *= i;
    }
    return temp;
}

double for_13(double n)
{
    double temp = 0;
    for(double i = 1.0; i <= n; i += 0.1, temp *= -1)
    {
        temp = temp + i;

    }
    return temp;
}

void for_14(int n)
{
    int temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += 2 * i - 1;
        std::cout << temp <<std::endl;
    }
}

double for_15(double a, int n)
{
    double temp = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp *=a;
    }
    return temp;
}

void for_16(double a, int n)
{
    double temp = 1;
    for(int i = 0; i != n; ++i)
    {
        temp *= a;
        std::cout << temp << std::endl;
    }
}

int for_17(double a, int n)
{
    int temp = 0;
    for(int i = 0; i != n; ++i)
    {
        temp += pow(a,i);
    }
    return temp;
}

double for_18(double a, int n)
{
    double temp = 0;
    for(int i = 0; i != n; ++i, temp *= -1)
    {
        temp += pow(a,i);
    }
    return temp;
}

double for_19(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp *= i;
    }
    return temp;
}

double for_20(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp += temp * i;
    }
    return temp;
}

double for_21(double value)
{
    double temp = 1;
    for(int i = 2; i <= value; ++i)
    {
        temp += 1/(temp * i);
    }
    return temp;
}

double for_22(double x, double n)
{
    double temp = 1 + x;
    double fact = 1;
    for(int i = 2; i <= n; ++i)
    {
        temp += pow(x,i)/(fact *= i);
    }
    return temp;
}

double for_23(double x, double n)
{
    double temp  = x;
    double fact = 1;
    for(int i = 3; i <= n; i +=2, temp *= -1)
    {
        temp += pow(x,i)/(fact *= i);
    }
    return temp;
}

double for_24(double x, double n)
{
    double temp  = 1;
    double fact = 1;
    for(int i = 2; i <= n; i *= 2, temp *= -1)
    {
        temp += pow(x,i)/(fact *= i);
    }
    return temp;
}

double for_25(double x, double n)
{
    double temp  = x;
    for(int i = 2; i <= n; ++i, temp *= -1)
    {
        temp += pow(x,i)/ i;
    }
    return temp;
}

double for_26(double x, double n)
{
    double temp  = x;
    for(int i = 3; i <= n; i += 2, temp *= -1)
    {
        temp += pow(x,i)/ i;
    }
    return temp;
}

double for_27(double x, double n)
{
    double temp = x;
    for(int i = 3; i <= n; ++i)
    {
        temp += (2 * i -1) * pow(x,2 * i -1) / (2 * i + 1);
    }
    return temp;
}

double for_28(double x, double n)
{
    double temp = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(-1,i) * (2 * i - 3) * pow(x, i) / (2 * i);
    }
    return temp;
}

void for_29 (double a, double h, int n)
{
    for(int i = 0; i <= n; ++i)
    {
        std::cout << a + i * h <<std::endl;
    }
}

void for_31(int n)
{
    int a = 2;
    for(int i = 1; i <= n; ++i)
    {
        a = 2 + 1 / a - 1;
        std::cout << a;
    }
}



void for_33(int n)
{
    int temp1 = 0;
    int temp2 = 1;
    for(int i = 1; i <= n; ++i)
    {
        temp1 += temp2;
        temp2 = temp1 - temp2;
        std::cout <<  temp2 <<std::endl;

    }
}

double for_36(double n, double k)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(i,k);
    }
    return temp;
}

double for_37(double n)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i)
    {
        temp += pow(i,i);
    }
    return temp;
}

double for_38(double n, double n_1)
{
    double temp = 0;
    for(int i = 1; i <= n; ++i, --n_1)
    {
        temp += pow(n,n_1);
    }
    return temp;
}

void for_39(int n)
{
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << i << std::endl;;
        }
    }
}

void for_40(int a, int b)
{
    for(int i = a; i <= b; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << i;
        }
    }
}
void run_tasks_for()
{
    //for_39(3);
};
#endif // TASK_FOR_H_INCLUDED
