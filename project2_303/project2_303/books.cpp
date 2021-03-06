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
	employee* emp1= new employee;
	emp1->setName(d);
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
	return *plannedEmployeeQ.top();
}
bool book::checkArchived()
{
	return archived;
}

int book::totalDaysRetained(){
	Date y;
	int z= y.daysFromDate(circStart, circEnd);
	employee* temp = plannedEmployeeQ.top();
	(*temp).setRetainingTime(z);
	return z;
}

void book::setEMPWaitingTime(int time, int retainingTime){
	employee temp = *plannedEmployeeQ.top();
	temp.setWaitingTime(time);
}
int book::getEMPWaitingTime(string emp){
	employee* temp = plannedEmployeeQ.top();
	return (*temp).getWaitingTime();
}

void book::setHolder()
{
	employee* temp;
	temp= plannedEmployeeQ.top();
	holder = (*temp).getName();
}
string book::getHolder()
{
	return holder;
}

string book::getNxtHolder(){
	return nxtHolder;
}

bool book::isEmpty()
{
	if (!plannedEmployeeQ.empty())
	{
		return false;
	}
	else
		return true;
}



#endif
