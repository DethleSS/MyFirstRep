#ifndef FUCTOR_H_INCLUDED
#define FUCTOR_H_INCLUDED
#include "function.h"
struct FractionCreator
{
    int denum = 1;
    int num = 1;
    int denum_step = 2;
    Fraction operator()();

};
Fraction  FractionCreator::operator()()
{
    denum += denum_step;
    return Fraction(num, denum);
};

struct FillArray
{
    int value = 0;
    int step = 3;
    int operator()(int& result);
};
 int FillArray::operator()(int& result)
{
    value += step;
    result = value;
}




#endif // FUCTOR_H_INCLUDED
