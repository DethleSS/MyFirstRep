#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

struct Person
{
    std::string m_name;
    std::string m_nickname;
    Person() = default;
    Person(std::string name ,std::string nickname);

};
 Person::Person(std::string name ,std::string nickname):m_name(name),m_nickname(nickname){};



#endif // PERSON_H_INCLUDED
