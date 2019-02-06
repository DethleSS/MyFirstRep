#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
#include <algorithm>
namespace stu {

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

template < class Iterator, class UP>
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

template <class T , class Iterator>
T count (Iterator first, Iterator last, T value)
{
    T counter = 0;
    for(; first != last; ++first)
    {
        if(*first == value)
        {
            ++counter;
        }
    }
    return counter;
}

template <class T, class Iterator, class UP>
T count_if(Iterator first, Iterator last, UP p)
{
    T counter = 0;
    for(; first != last; ++first)
    {
        if(p(*first))
        {
            ++counter;
        }
    }
    return counter;
}

void bubble_sort(int* array,int size)
{
    bool is_sorted;
    for(int i = 0; i != size; ++i)
    {
        is_sorted = true;
      for(int j = 0; j != size - 1 - i; ++j)
      {
          if(array[j] > array[j+1])
          {
             std::swap(array[j], array[j + 1]);
             is_sorted = false;
          }
      }
      if(is_sorted)
      {
          return;
      }
    }
}

}
int is_even(int a)
{
    return a%2 == 0;
}



#endif // ALGORITHMS_H_INCLUDED
