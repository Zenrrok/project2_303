#include <vector>
#include <functional>
#include "employee.h"



class library_queue {
public:
	library_queue() {}
	void push(const employee item){
		the_data.push_back(item);
	}// Not too sure if I need a * here
	void pop()
	{
		vector<employee>::iterator max = the_data.begin();
		for (vector<employee>::iterator iter = the_data.begin(); iter != the_data.end(); iter++) // iterating through the vector
		{	

			if (max->getPriority() < iter->getPriority()) //finding the Employee with the highest priority
			{
				max = iter;
			}
		}
		 
		delete (&max); //deleting that employee since that's what happens when you pop from a queue
							  //I suppose it could return too if we need it to
	}
	bool empty() const { return the_data.empty(); }
	int size() const { return the_data.size(); }
	const employee& top() const { return the_data.front(); } //Not too sure if I need a * by Employee

	



private:
	vector<employee> the_data; //Has to be a vector of pointers to Employee objects so that
	                            // when an employee is edited in One Book, it is the same for the other Books 

};




