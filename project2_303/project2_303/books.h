#pragma once
#include "date.h" //I'm just assuming
#include "employee.h"
#include <queue>
using namespace std;

class book
{
public:
	//default constructer
	book();
	//setters
	void setName(string a);
	void setCircStart(date b);
	void setCircEnd(date c);
	void addEmployee(employee d);
	void removeEmployee();
	void isArchived();

	//getters
	string getName();
	date getCircStart();
	date getCircEnd();
	employee getEmployee();
	bool checkArchived();

private:
	string name;
	date circStart;
	date circEnd;
	bool archived;
	queue<employee> plannedEmployeeQ;
	
};
