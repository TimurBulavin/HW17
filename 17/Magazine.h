#pragma once
#include "Publication.h"
#include<vector>
#include<algorithm>
class Magazine : public Publication {
private:
    vector<string> articles;
public:
    Magazine(string title, string author, int year);
    Magazine();


    void addArticle(string article);



};
