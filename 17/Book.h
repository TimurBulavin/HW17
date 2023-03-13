#pragma once
#include "Publication.h"

class Book : public Publication {
protected:
    string summary;
public:
    Book(string title, string author, int year, string summary);
    Book();

    void  setsummary(string summary);
    string getSummary() const;
};

