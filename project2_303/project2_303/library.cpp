#pragma once
#ifndef LIBRARY_HEADER
#define LIBRARY_HEADER
#include "library.h"

Library::Library()
{
  title = "";
}
void Library::addBook(string a)
{
	book book1;
	book1.setName(a);
	booksToBeCirc.push_back(book1);
}
void Library::addEmployee(string b)
{
	for (iterator <List> iter = booksToBeCirc.begin(), iter < booksToBeCirc.end(), iter++)
	{
	  iter->addEmployee(b);
	}
}
void Library::circulateBook(string t, date c)
{
	
}
void Library::passOn(string ti, date d)
{

}

#endif
