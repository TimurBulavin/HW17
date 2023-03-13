#pragma once
#include <string>
#include<iostream>
using namespace std;
class Publication
{
protected:
	string title;
	string author;
	int year;
    string a;
public:
    Publication();
    Publication(string title, string author, int year);
    virtual ~Publication();

    void settitle(string t);
    void setauthor(string a);
    void setyear(int y);
   string getTitle() const;
   string getAuthor() const;
   int getYear() const;

   void show()const;

    
};

