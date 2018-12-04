#include <iostream>
#include <set>

std::set<int> and1(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(std::set<int>::iterator i = a.begin(); i != a.end(); ++i)
    {
        if(b.find(*i) != b.end())
        {
            std::cout << *i <<std::endl;
            result.insert(*i);
        }
    }
    return result;
}
std::set<int> or1(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(auto i = a.begin(); i != a.end(); ++i)
    {
        result.insert(*i);

    }
    for(auto j = b.begin(); j != b.end(); ++j)
    {
        result.insert(*j);
    }
    return result;

}

std::set<int> xor1(std::set<int> a, std::set<int> b)
{
    std::set<int> result;
    for(std::set<int>::iterator i = a.begin(); i != a.end(); ++i)
    {
        if(b.find(*i) == b.end())
        {
            result.insert(*i);
        }
    }
    for(std::set<int>::iterator i = b.begin(); i != b.end(); ++i)
    {
        if(a.find(*i) == a.end())
        {
            result.insert(*i);
        }
    }
    return result;
}

int main()
{
    std::set<int> a{1, 2, 3, 11, 22, 33, 7, 8, 9};
    std::set<int> b{4, 5, 6, 11, 22, 33};
    //and1(a, b);
    auto res = xor1(a, b);

    for(auto i = res.begin(); i != res.end(); ++i)
    {
        std::cout << *i <<std::endl;
    }

    return 0;
}
