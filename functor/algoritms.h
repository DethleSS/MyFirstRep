#ifndef ALGORITMS_H_INCLUDED
#define ALGORITMS_H_INCLUDED
namespace stu
{
template <class T, class Iterator>
Iterator find(Iterator first, Iterator last, T value)
{
    for(; first != last; ++first)
    {
        if(value == *first)
        {
            return first;
        }
    }
    return first;
}

template <class Iterator, class UP>
Iterator find_if(Iterator first, Iterator last, UP p)
{
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            return first;
        }
    }
    return first;
}

template <class Iterator, class UO>
void for_each(Iterator first, Iterator last, UO p)
{
    for(; first != last; ++first)
    {
        p(*first);
    }
}

template <class Iterator, class T>
T accumulate(Iterator first, Iterator last, T init)
{
    for(; first != last; ++first)
    {
        init += *first;
    }
    return init;
}

template <class Iterator, class T>
T average(Iterator first, Iterator last)
{
    return (accumulate(first, last, 0)) / last - first;
}
}
#endif // ALGORITMS_H_INCLUDED
