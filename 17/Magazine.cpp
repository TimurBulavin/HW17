#include "Magazine.h"

Magazine::Magazine(string title, string author, int year)
{
    this->title = title;
    this->author = author;
    this->year = year;
}

Magazine::Magazine()
{
    title = "";
    author = "";
    year = 0;
}

void Magazine::addArticle(string article)
{
    articles.push_back(article);
}

