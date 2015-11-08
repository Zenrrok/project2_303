#pragma once
#ifndef BOOKS_HEADER
#define BOOKS_HEADER
#include "books.h"

book::book()
{
	name = "";
	/*circStart; we may want to set these to something later
	circEnd;*/
	archived = false;
}
//setters
void book::setName(string a)
{
	name = a;
}
void book::setCircStart(date b)
{
	circStart = b;
}
void book::setCircEnd(date c)
{
	circEnd = c;
}
void book::addEmployee(string d)
{
	employee emp1;
	emp1.setName(d)
	plannedEmployeeQ.push(emp1);
}
void book::RemoveEmployee()
{
	//just guessing
	plannedEmployeeQ.pop();
}
void book::isArchived()
{
	archived = true;
}


//getters
string book::getName()
{
	return name;
}
date book::getCircStart()
{
	return circStart;
}
date book::getCircEnd()
{
	return circEnd;
}
employee book::getEmployee();
{
	return plannedEmployeeQ.top();
}
bool book::checkArchived()
{
	return archived;
}
#endif
