#pragma once
#include "date.h" //I'm just assuming
#include "employee.h"
#include "library_queue.h"
#include <queue>
using namespace std;

class book
{
public:
	//default constructer
	book();
	//setters
	void setName(string a);
	void setCircStart(Date b);
	void setCircEnd(Date c);
	void addEmployee(string d);
	void removeEmployee();
	void isArchived();
	void RemoveEmployee();
	void setEMPWaitingTime(int time, int retainingTime);
	void setHolder();
	



	//getters
	string getName();
	Date getCircStart();
	Date getCircEnd();
	employee getEmployee();
	bool checkArchived();
	int totalDaysRetained();
	int getEMPWaitingTime(string empName);
	string getHolder();
	string getNxtHolder();
	bool isEmpty();

private:
	string name;
	string holder;
	string nxtHolder;
	Date circStart;
	Date circEnd;
	bool archived;
	library_queue<employee*> plannedEmployeeQ;
	
};