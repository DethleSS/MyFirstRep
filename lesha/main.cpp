#include <iostream>
#include <vector>
#include <algorithm>
template <class Iter>
void f2(Iter first, Iter last)
{
    std::vector<int> v;
    for(; first != last; first +=3)
    {
        v.push_back(*first);
    }
    std::cout << "Elements ";
    std::for_each(v.begin(),v.end(),[](int a){std::cout << a <<" ";});
    std::cout<<std::endl;
    std::cout << "Size " <<v.size();
}
int main()
{
    std::vector<int> v1{1,2,3,4,5,6,7,8,9,10,11,12};
    f2(v1.begin(),v1.end());
    return 0;
}
