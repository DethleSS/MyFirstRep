#ifndef PREDICATE_H_INCLUDED
#define PREDICATE_H_INCLUDED
#include "person.h"
#include "book.h"

bool age_greater(Person a, Person b)
{
    return a.age > b.age;
}
bool max_pages(Book a,Book b)
{
    return a.pages > b.pages;
}
bool lexical_grater_name(Person a, Person b)
{
    return a.name > b.name;
}
bool lexical_grater_surename(Person a, Person b)
{
    return a.surename > b.surename;
}
bool greater_surename_name(Person a, Person b)
{
    if(a.surename == b.surename)
    {
        return a.name > b.name;
    }
    return a.surename > b.surename;
}

#endif // PREDICATE_H_INCLUDED
