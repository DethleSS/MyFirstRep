#ifndef TASK_BEGIN_H_INCLUDED
#define TASK_BEGIN_H_INCLUDED
#include <cmath>
#define PI 3.14

int bgein_1(int a)
{
    int p = 4 * a;
    return a;
}

int begin_2(int a)
{
    int s = pow(a,2);
    return s;
}

int bgein_3_1(int a, int b)
{
    int s = a * b;
    return s;
}

int bgein_3_2(int a, int b)
{
    int p = 2 * (a + b);
    return p;
}

int begin_4(int d)
{
    int l = PI * d;
    return l;
}

int begin_5_1(int a)
{
    int v = std::pow(a, 3);
    return v;
}

int begin_5_2(int a)
{
    int s = 6 * std::pow(a, 2);
    return s;
}

int bgein_6_1(int a, int b, int c)
{
    int v = a * b * c;
    return v;
}

int begin_6_2(int a, int b, int c)
{
    int s = 2 * (a * b + b * c + a * c);
    return s;
}

int begin_7_1(int r)
{
    int l = 2 * PI * r;
    return l;
}

int begin_7_2(int r)
{
    int s = PI * std::pow(r, 2);
    return s;
}

int begin_8(int a, int b)
{
    return (a + b) / 2;
}

int begin_9(int a, int b)
{
    return std::sqrt(a * b);
}

void begin_10(int a, int b)
{
    int c = std::pow(a, 2);
    int d = std::pow(b, 2);
    int sum = c + d;
    int difference = c - d;
    int mul = c * d;
    int div = c / d;
    std::cout << sum << " " << difference << " " << mul << " " << div << std::endl;
}

void begin_11(int a, int b)
{
    int c = abs(a);
    int d = abs(b);
    int sum = c + d;
    int difference = c - d;
    int mul = c * d;
    int div = c / d;
    std::cout << sum << " " << difference << " " << mul << " " << div << std::endl;
}

int begin_12_1(int a, int b)
{
    int c = std::sqrt(pow(a, 2) + pow(b, 2));
    return c;
}

int begin_12_2(int a, int b, int c)
{
    int p = a + b + c;
    return p;
}

int begin_13(int r1, int r2)
{
    int s1 = PI * pow(r1, 2);
    int s2 = PI * pow(r2, 2);
    int s3 = s1 - s2;
    return s3;
}

int begin_14_1(int l)
{
    int r = l / (2 * PI);
    return r;
}

int begin_14_2(int l, int r)
{
    int s = PI * pow(r, 2);
    return s;
}

int begin_15(int s)
{
    int d = sqrt(s / PI) * (1.0 / 2.0);
    int l = PI * d;
    return l, d;
}

int begin_16(int x1, int x2)
{
    return std::abs(x2) - std::abs(x1);
}

int begin_17_1(int a, int b, int c)
{
    int ac = std::abs(c - a);
    return ac;
}

int begin_17_2(int a, int b, int c)
{
    int bc = std::abs(b - a);
    return bc;
}

int begin_17_3(int a, int b, int c)
{
    int ac = std::abs(c - a);
    int bc = std::abs(b - a);
    int d = ac + bc;
    return d;
}

int begin_18(int a, int b, int c)
{
    return std::abs(c - a) * std::abs(c - b);
}

int begin_19_1(int x1, int x2, int y1, int y2)
{
    int a = y2 - y1;
    int b = x2 - x1;
    int p = 2 * (a + b);
    return p;
}

int begin_19_2(int x1, int x2, int y1, int y2)
{
    int a = y2 - y1;
    int b = x2 - x1;
    int s = a * b;
    return s;
}

int begin_20(int x1, int x2, int y1, int y2)
{
    int a = pow((x2 - x1), 2);
    int b = pow((y2 - y1), 2);
    int c = sqrt(a + b);
    return c;
}

void begin_21(int x1, int x2, int x3, int y1, int y2, int y3)
{
    double ax = x1 - x2;
    double ay = y1 - y2;
    double bx = x2 - x3;
    double by = y2 - y3;
    double cx = x3 - x1;
    double cy = y3 - y1;
    double a = sqrt(ax * ax + ay * ay);
    double b = sqrt(bx * bx + by * by);
    double c = sqrt(cx * cx + cy * cy);
    double p = (a + b + c) / 2;
    double S = sqrt(p *(p - a) * (p - b) * (p - c));
    std::cout << S << " " << p << std::endl;
}

void begin_22(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void begin_23(int& a, int& b, int& c)
{
   int temp = b;
   b = a;
   c = temp;
   a = temp;
}

void begin_24(int& a, int& b, int& c)
{
    int temp = c;
    int temp1 = b;
    c = a;
    b = temp;
    a = temp1;
}

int begin_25(int x)
{
    return 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
}

int begin_26(int x)
{
    return 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
}

int begin_27(int value)
{
    int a = value * value;
    a = a * a;
    a = a * a;
    return a;
}

int begin_28(int a)
{
    int b;
    b = a * a;
    a = a * a;
    a = a * b;
    b = a;
    a = a * a;
    a = a * b;
}

double begin_29(double value)
{
    return value * PI / 180;
}

double begin_30(double value)
{
    return value * 180 / PI;
}

int begin_31(int tf)
{
    return (tf - 32) * 5 / 9;
}

int begin_32(int tc)
{
    return 9 * tc / 5 + 32;
}

int begin_33_1(int x, int a)
{
    return x * a;
}

int begin_33_2(int y, int a)
{
    return y * a;
}

int begin_34(int x, int a, int y, int b)
{
    int candies = 1 * y;
    int iriski = 1 * b;
    int expensive = a / b;
}

int begin_35(int v, int u, int t1, int t2)
{
    return v * t1 + (v - u) * t2;
}

int begin_36(int v1, int v2, int s, int t)
{
    return s + t * (v1 + v2);
}

int begin_37(int v1, int v2, int s, int t)
{
    return std::abs(s + t *(v1 - v2));
}

int begin_38(int a, int b)
{
    return - (b / a);
}

void begin_39(int a, int b, int c)
{
    int d = pow(b, 2) - 4 * a * c;
    int x1 = (-b + sqrt(d)) / (2 * a);
    int x2 = (-b -sqrt(d)) / (2 * a);
    std::cout << x1 << " " << x2 << std::endl;
}

void begin_40(int a1, int b1, int c1, int a2, int b2 ,int c2)
{
    int d = a1 * b2 - a2 * b2;
    int x = (c1 * b2 - c2 * b1) / d;
    int y = (a1 * c2 - a2 * c1) / d;
}

void run_tasks_begin()
{
    //begin_36(1,1,1,1);
};

#endif // TASK_BEGIN_H_INCLUDED
