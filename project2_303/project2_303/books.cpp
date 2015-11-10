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
void book::setCircStart(Date b)
{
	circStart = b;
}
void book::setCircEnd(Date c)
{
	circEnd = c;
}
void book::addEmployee(string d)
{
	employee emp1;
	emp1.setName(d);
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
Date book::getCircStart()
{
	return circStart;
}
Date book::getCircEnd()
{
	return circEnd;
}
employee book::getEmployee()
{
	return plannedEmployeeQ.top();
}
bool book::checkArchived()
{
	return archived;
}

int book::totalDaysRetained(){
	int y = daysApart(circStart, circEnd);
	plannedEmployeeQ.top().setRetainingTime(y);
	return y;
}

void book::setEMPWaitingTime(string empName, int time){
	for (library_queue<employee>::iterator iter = plannedEmployeeQ.begin(); iter != plannedEmployeeQ.end(); iter++)
	{
		if (iter->getName() == empName)
		{
			iter->setWaitingTime(time);
		}
	}
	
	
}
int book::getEMPWaitingTime(){

}

void book::setHolder()
{
	employee temp = plannedEmployeeQ.top();
	holder = temp.getName();
}
string book::getHolder()
{
	return holder;
}

#endif
