#ifndef ALGORITMS_H_INCLUDED
#define ALGORITMS_H_INCLUDED
namespace stu
{
template <class Iterator>
Iterator accumulate (Iterator first, Iterator last)
{
    Iterator temp = 0;
    for(; first != last; ++first)
    {
        *temp += *first;
    }
    return *temp;
}
}
#endif // ALGORITMS_H_INCLUDED
