#pragma once
#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER
#include "employee.h"

employee::employee()
{
  name = "";
}
void employee::setName(string a)
{
	name = a;
}
void employee::setWaitingTime(Date b)
{
	waitingTime = b;
}
void employee::setRetainingTime(Date c)
{
	retainingTime = c;
}


string employee::getName()
{
	return name;
}
int employee::getWaitingTime()
{
	return waitingTime;
}
int employee::getRetainingTime()
{
	return retainingTime;
}
int employee::getPriority()
{
	return (waitingTime - retainingTime);
}
#endif
