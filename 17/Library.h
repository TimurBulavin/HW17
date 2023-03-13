#pragma once
#include <string>
#include <vector>
#include "Publication.h"

class Library
{
private:
    string name;
    vector<Publication*> publications;

public:
    Library(string name);
    string getName() const;
    void setName(string name);
    vector<Publication*> getPublications() const;
    void addPublication(Publication* publication);
    void deletePublication(int index);
    void findPublications(string name);
    void showPublications() const;
};