#pragma once
#include <string>
using std::string;

class PublicationException {
protected:
	string employeeName;
public:
	PublicationException(string name) : employeeName(name) {}
	virtual string Message() const = 0;
};

class BookException : public PublicationException {
public:
	BookException(string name) : PublicationException(name) {}
	virtual string Message() const override {
		return "Error: The book's title or author is empty.";
	}
};

class EditionYearException : public PublicationException {
private:
	int year;
public:
	EditionYearException(string name, int y) : PublicationException(name), year(y) {}
	virtual string Message() const override {
		return "Cannot create publication - the specified year of publication is incorrect";
	}
};