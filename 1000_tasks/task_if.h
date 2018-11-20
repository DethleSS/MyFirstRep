#ifndef TASK_IF_H_INCLUDED
#define TASK_IF_H_INCLUDED
#include <cmath>

int if_1 (int value)
{
    if(value > 0)
    {
        return value + 1;
    }
    return value;
}

int if_2 (int value)
{
    if(value > 0)
    {
        return value + 1;
    }
    return value - 2;
}

int if_3 (int value)
{
    if(value > 0)
    {
        return value + 1;
    }
    else
    {
        if(value != 0)
        {
            return value - 2;
        }
        return value = 10;
    }
}

int if_4(int a, int b, int c)
{
    int counter = 0;
    if(a > 0)
    {
        ++counter;
    }

    if(b > 0)
    {
        ++counter;
    }
    if(c > 0)
    {
        ++counter;
    }
    return counter;
}

void if_5(int a, int b, int c)
{
    int positive = 0;
    int non_positive = 0;
    if(a > 0)
    {
        ++positive;
    }
    else
    {
        ++non_positive;
    }
    if(b > 0)
    {
        ++positive;
    }
    else
    {
        ++non_positive;
    }
    if(c > 0)
    {
        ++positive;
    }
    else
    {
        ++non_positive;
    }
    std::cout << "positive " << positive << " " << "non_positive " << non_positive << std::endl;
}

int if_6(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}

int if_7(int a, int b)
{
    if(a > b)
    {
        return 1;
    }
    return 2;
}

void if_8(int a, int b)
{
    if(a > b)
    {
        std::cout << a << std::endl << b << std::endl;
    }
    else
    {
        std::cout << b << std::endl << a << std::endl;
    }

}

void if_9(double a, double b)
{
    if(a > b)
    {
        a = -1;
        b = 100;
        std::cout << a << " " << b << std::endl;
    }
    else
    {
        a = 100;
        b = -1;
        std::cout << a << " " << b << std::endl;;
    }
}

void if_10(int a, int b)
{
    if(a != b)
    {
        int temp = a + b ;
        a += temp;
        b += temp;
        std::cout << a << " " << b <<std::endl;
    }
    else
    {
        a = 0;
        b = 0;
        std::cout << a << " " << b <<std::endl;
    }
}

void if_11(int a, int b)
{
    if(a != b)
    {
        if(a > b)
        {
            int temp1 = a;
            a += temp1;
            b += temp1;
            std::cout << a << " " << b <<std::endl;
        }
        else
        {
            int temp2 = b;
            a += temp2;
            b += temp2;
            std::cout << a << " " << b <<std::endl;
        }
    }
    else
    {
        a = 0;
        b = 0;
        std::cout << a << " " << b <<std::endl;
    }
}

int if_12(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    return b;

}

/*void if_13(int a, int b, int c)
{
    if_12(if_12(a,b),c);
    if(a > b)
    {
        if(a > c)
        {
            std::cout <<
        }
    }
}*/

int if_15(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            if(b > c)
            {
                return a + b;
            }
            return a + c;
        }
        return a + c;
    }
    else
    {
        if(b > c)
        {
            if(c > a)
            {
                return c + b;
            }
            return a + b;
        }
        if(a > c)
        {
        return a + c;
        }
        return c + b;

    }

}

void if_16(int a, int b, int c)
{
    if(a < b && b < c)
    {
        std::cout << a * 2 << " " << b * 2 << " " << c * 2 <<std::endl;
    }
    else
        std::cout << -a << " " << -b << " " << -c << std::endl;
}

void if_17(int a, int b, int c)
{
    if((a < b && b < c) || (a > b && b > c) )
    {
        std::cout << a * 2 << " " << b * 2 << " " << c * 2 <<std::endl;
    }
    else
        std::cout << -a << " " << -b << " " << -c << std::endl;
}

int if_18(int a, int b, int c)
{
    if(a == b)
    {
        return 3;
    }
    else
    {
        if(a == c)
        {
            return 2;
        }
        return 1;
    }
}

int if_19(int a,int b, int c, int d)
{
    if(a == b && a == c)
    {
        return 4;
    }
    if(a == b && a == d)
    {
        return 3;
    }
    if(a == c && a == d)
    {
        return 2;
    }
    if(b == c && c == d)
    {
        return 1;
    }


}

int if_22 (int x, int y)
{
    if(x > 0)
    {
        if(y > 0)
        {
            return 1;
        }
        return 4;
    }
    else
    {
        if(y > 0)
        {
            return 2;
        }
        return 3;
    }
}

/*int if_23(int x1, int y1, int x2, int y2, int x3, int y3,)
{
    if(x1 > x2 && x1 > x3);

}*/

double if_24(double x)
{
    if (x > 0)
    {
        return 2 * sin(x);
    }
    return 6 - x;
}

double if_25(double x)
{
    if(x < -2 || x > 2)
    {
        return 2 * x;
    }
    return - 3 * x;
}

double if_26(double x)
{
    if (x <= 0)
    {
        return -x;
    }
    if(0 < x && x < 2)
    {
        return pow(x,2);
    }
    if(x >= 2)
    {
        return 4;
    }
}

double if_27(double x)
{
    if(x < 0)
    {
        return 0;
    }
    if(x >= 0 && x < 1 && x >= 2 && x < 3)
    {
        return 1;
    }
    if(x >= 1 && x < 2 && x >= 3 && x < 4)
    {
        return -1;
    }
}

int if_28(int year)
{
    if(year % 4 == 0)
    {
        return 366;
    }
    return 365;
}

void if_29(int value)
{
    if(value == 0)
    {
        std::cout << "0" <<std::endl;
        return;
    }
    if(value > 0 )
    {
        if(value %2 == 0)
        {
            std::cout << "number is even positive" <<std::endl;
        }
        else
        {
            std::cout << "number is not even positive" <<std::endl;
        }
    }
    else
    {
        if(value %2 == 0)
        {
            std::cout << "number is even negative" <<std::endl;
        }
        else
        {
            std::cout << "number is not even negative" <<std::endl;
        }
    }

}

void if_30 (int value)
{
    if(value %2 == 0)
    {
        if(value > 9 && value < 100)
        {
            std::cout << "number is even two-digit" << std::endl;
        }
        if(value > 100 && value < 1000)
        {
            std::cout << "number is even three-digit" << std::endl;
        }
        if(value > 0 && value < 10)
        {
            std::cout << "number is even one-digit" << std::endl;
        }
    }
    else
    {
        if(value > 9 && value < 100)
        {
            std::cout << "number is not even two-digit" << std::endl;
        }
        if(value > 100 && value < 1000)
        {
            std::cout << "number is not even three-digit" << std::endl;
        }
        if(value > 0 && value < 10)
        {
            std::cout << "number is not even one-digit" << std::endl;
        }
    }
}
void run_tasks_if()
{
    //if_30(367);
}

#endif // TASK_IF_H_INCLUDED
