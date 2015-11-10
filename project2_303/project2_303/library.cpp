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
	for (list<book>::iterator iter = booksToBeCirc.begin(); iter != booksToBeCirc.end(); iter++)
	{
	  iter->addEmployee(b);
	}
}
void Library::circulateBook(string t, Date c)
{
	for (list<book>::iterator iter = booksToBeCirc.begin(); iter != booksToBeCirc.end(); iter++)
	{
		if (t == iter->getName())
		{
			iter->setCircStart(c);
			iter->setHolder()
		}
		else
			cout << "Books does not exist" << endl;
	}

}
void Library::passOn(string ti, Date d)
{
	/* 
	The date received is the circulation end date, the date to pass on. The string is the title of the book.
	This will be used to find the book in the queue by using the getName() function. 
	Using the circulation start date and the given circulation end date. 
	The number of days for the retaining time should be calculated.
	*/
	for (list<book>::iterator iter = booksToBeCirc.begin(); iter != booksToBeCirc.end(); iter++){
		if (iter->getName() == ti)
		{
			iter->setCircEnd(d);
			int retainedTime= iter->totalDaysRetained();
			employee temp = iter->getEmployee();
			iter->RemoveEmployee();
			iter->setEMPWaitingTime(iter->)

		}
	}

	
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
