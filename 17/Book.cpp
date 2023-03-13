#pragma once
#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book(string title, string author, int year, string summary);
    Book();
    void setsummary(string summary);
   string getSummary() const;
};

Book::Book(string title, string author, int year, string summary)
{
    this->title = title;
    this->author = author;
    this->year = year;
    this->summary = summary;
}

Book::Book()
{
    title = "";
    author = "";
    year = 0;
    summary = " ";
}

void Book::setsummary(string summary)
{
    this->summary = summary;
}

string Book::getSummary() const
{
    return summary;
}
