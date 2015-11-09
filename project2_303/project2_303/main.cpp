#include "library.h"
#include <iostream>
using namespace std;


int main()
{
  Library library;
  library.addBook("Software Engineering");
  library.addBook("Chemistry");
   
  library.addEmployee("Adam");
  library.addEmployee("Sam");
  library.addEmployee("Ann");
   
  library.circulateBook("Chemistry", Date(2015, 3, 1, DateFormat::US));
  library.circulateBook("Software Engineering", Date(2015, 4, 1, DateFormat::US));
   
  library.passOn("Chemistry", Date(2015, 3, 5, DateFormat::US)); 
  library.passOn("Chemistry", Date(2015, 3, 7, DateFormat::US));
  library.passOn("Chemistry", Date(2015, 3, 15, DateFormat::US)); 
  
  library.passOn("Software Engineering", Date(2015, 4, 5, DateFormat::US));
  library.passOn("Software Engineering", Date(2015, 4, 10, DateFormat::US));
  library.passOn("Software Engineering", Date(2015, 4, 15, DateFormat::US));
    
  return 0;  
} 
