#pragma once
#include "Publication.h"

class Book : public Publication {
public:
    Book(const std::string& title, const std::string& author, int year, const std::string& summary);
    ~Book();

    const std::string& getSummary() const;

private:
    std::string summary;
};

