#ifndef ALGORITHMS_H_INCLUDED
#define ALGORITHMS_H_INCLUDED
namespace stu
{
template <typename Iterator,typename UnaryPridecate>
bool all_of(Iterator first,Iterator last, UnaryPridecate p)
{
    for(;first != last; ++first)
    {
        if(!p(*first))
        {
            return false;
        }
    }
    return true;
}
template <typename Iterator,typename UnaryPridecate>

bool none_of(Iterator first,Iterator last,UnaryPridecate p)
{
    for(;first != last; ++first)
    {
        if(p(*first))
        {
            return false;
        }
    }
    return true;
}
template <typename Iterator,typename UnaryPridecate>
bool any_of(Iterator first,Iterator last,UnaryPridecate p)
{
    for(;first != last; ++first)
    {
        if(p(*first))
        {
            return true;
        }
    }
    return false;
}
template <typename T,typename Iterator,typename BinaryOperation>
T accumulate(Iterator first,Iterator last,T init,BinaryOperation op)
{
    for(;first < last; ++first)
    {
        temp += *first;
    }
    return temp;
}
}
#endif // ALGORITHMS_H_INCLUDED
