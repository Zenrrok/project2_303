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
	void setWaitingTime(date b);
	void setRetainingTime(date c);

	//getters
	string getName();
	date getWaitingTime();
	date getRetainingTime();
	int getTime();

private:
	string name;
	date waitingTime;
	date retainingTime;
	
};
