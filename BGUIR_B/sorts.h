#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED
using BinaryPridicate = bool (*) (int,int);
void bubble_sort(int* array,int size,BinaryPridicate p)
{
    for(int i = 0;i<size;++i)
    {
      for(int j = 0;j<size - 1 - i;++j)
      {
          if(p(array[j],array[j+1]))
          {
              int temp = array[j];
              array[j] = array[j+1];
              array[j+1] = temp;
          }
      }
    }
}




#endif // SORTS_H_INCLUDED
