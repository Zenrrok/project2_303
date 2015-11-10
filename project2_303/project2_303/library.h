#pragma once
#include "books.h" //I'm just assuming
#include "date.h"
#include <list>
#include <iostream>

using namespace std;

class Library
{
public:
	//default constructer
	Library();
	
	void addBook(string a);
	void addEmployee(string b);
	void circulateBook(string t, Date c);
	void passOn(string ti, Date d);

private:
	string title;
	Date dateToPassBook;
	list <book> booksToBeCirc;
  	list <book> archivedBooks;
	list<employee> allEmployees;
	
};
