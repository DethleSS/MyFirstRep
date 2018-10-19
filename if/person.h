#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

struct Person
{
    std::string name;
    std::string surename;
    int age;
    Person(){};
    Person(std::string n, std::string s, int a)
    {
        name = n;
        surename = s;
        age = a;
    }
    void print()
    {
        std::cout << name << " " << surename <<std::endl;
    }
};


#endif // PERSON_H_INCLUDED
