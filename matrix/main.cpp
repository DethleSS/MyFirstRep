#include <iostream>
template <typename Iterator>
void print_array(Iterator array,int col, int row)
{
    for(int i = 0;i < col; ++i)
    {
        for(int j = 0; j < row;++j)
        {
            std::cout << array[i][j] <<" ";
        }
        std::cout << std::endl;
    }
}

template <typename Iterator>
void mul_array(Iterator array_op,int col, int row, int value,Iterator result)
{

    for(int i = 0; i < col; ++i)
    {
        for(int j = 0; j < row; ++j)
        {
           result [i][j] = array_op[i][j]*value;
        }
    }

}

template <typename Iterator,typename Iterator_1>
void transpose_matrix(Iterator array, int col, int row, Iterator_1 result)
{
    for(int i = 0; i<col;++i)
    {
        for(int j = 0;j<row;++j)
        {

            result[j][i] = array[i][j];
        }
    }
}
int main()
{
    int array[3][3]{{17,28,30},
                    {46,55,63},
                    {56,68,32}};
    int array_1[3][2]{
                    {2,34},
                    {4,54},
                    {7,98}};
    int array_result[3][3];
    int array_result_1[2][3];
  transpose_matrix(array_1, 3, 2 ,array_result_1);
      print_array(array_result_1,2,3);






    return 0;
}
