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
	/* 
	If the employee queue in the book object is on the last employee (it's empty after you pop the current employee).
	The retaining time for the employee gets adjusted to how many days the employee had the book. 
	Then the employee is popped from the queue.
	Then the book is placed in the archived book queue and popped from the books to be circulated queue. */
	
	/* 
	If it is not the last employee in the queue.
	The retaining time for the employee gets adjusted to how many days the employee had the book. 
	The next employee in the queue (the one the book is being passed to) gets a new waiting time.
	The waiting time is the retaining time + the waiting time of the previous employee.
	Then the previous employee is popped from the queue
	*/
}

#endif
