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
void employee::setWaitingTime(date b)
{
	waitingTime = b;
}
void employee::setRetainingTime(date c)
{
	retainingTime = c;
}


string employee::getName()
{
	return name;
}
date employee::getWaitingTime()
{
	return waitingTime;
}
date employee::getRetainingTime()
{
	return retainingTime;
}
#endif
