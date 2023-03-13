#include "Publication.h"

Publication::Publication()
{
    title = "";
    author = "";
    year = 0;
}

Publication::Publication(string title, string author, int year)
{
    this->title = title;
    this->author = author;
    this->year = year;
}

Publication::~Publication()
{
    cout << "~Publication ";
}

void Publication::settitle(string t)
{
    this->title = title;
}

void Publication::setauthor(string a)
{
    this->author = author;
}

void Publication::setyear(int y)
{
    this->year = year;
}

string Publication::getTitle() const
{
    return title;
}

string Publication::getAuthor() const
{
    return author;
}

int Publication::getYear() const
{
    return year;
}

void Publication::show() const
{
    cout << "\t Info" << endl;
    cout << "title " << title << endl;
    cout << "author " << author << endl;
    cout << "year " << year << endl;
}
