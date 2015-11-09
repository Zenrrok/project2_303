#pragma once
#include "date.h" //I'm just assuming

using namespace std;

class employee
{
public:
	//default constructer
	employee();
	//setters
	void setName(string a);
	void setWaitingTime(Date b);
	void setRetainingTime(Date c);

	//getters
	string getName();
	int getWaitingTime();
	int getRetainingTime();
	int getPriority();

private:
	string name;
	int waitingTime;
	int retainingTime;
	
};
