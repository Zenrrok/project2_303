#pragma once
#include "books.h" //I'm just assuming
#include "date.h"

using namespace std;

class Library
{
public:
	//default constructer
	Library();

	void addBook(string a);
	void addEmployee(string b);
	void circulateBook(string t, date c);
	void passOn(string ti, date d);

private:
	string title;
	date dateToPassBook;
	List <Book> booksToBeCirc;
  	List <Book> archivedBooks;
	
};
