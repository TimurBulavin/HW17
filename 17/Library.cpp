#include "Library.h"

Library::Library(string name)
{
    name = "";
}

string Library::getName() const
{
    return name;
}

void Library::setName(string name)
{
    this->name = name;
}

vector<Publication*> Library::getPublications() const
{
    return publications;
}

void Library::addPublication(Publication* publication)
{
    publications.push_back(publication);
}

void Library::deletePublication(int index)
{
	for (int i = 0; i < publications.size(); i++)
	{
		if (i == index)
		{
			publications.erase(publications.begin() + i);
			break;
		}
	}
}

void Library::findPublications(string name)
{
	for (int i = 0; i < publications.size(); i++)
	{
		if (publications[i]->getTitle() == name)
		{
			cout << publications[i]->getTitle() << endl;

		}
	}
}

void Library::showPublications() const
{
	for (int i = 0; i < publications.size(); i++)
	{
		cout << "\t#" << i << " ";
		publications[i]->show();
	}
}
