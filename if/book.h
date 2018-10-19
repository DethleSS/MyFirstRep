#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include "person.h"
struct Book
{
    Person author;
    std::string name;
     int pages;
    Book(){};
    Book(Person author_, std::string name_ , int pages_):author(author_),name(name_),pages(pages_){}



};

#endif // BOOK_H_INCLUDED
