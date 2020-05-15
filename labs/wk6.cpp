//Isabel Ovalles
// wk6.cpp

#include <iostream>
#include "StudentList.h"

using namespace std;

int main()
{
  cout << endl << endl;
  cout << "Functionality Testing For StudentList: " << endl << endl;

  StudentList csClass;

  cout << "Testing append... " << endl;
  csClass.append("Isabel", "Ovalles", 96.43);
  csClass.append("Sally", "Holland", 85.34);
  csClass.append("John", "Doe", 78.21);
  csClass.append("Julia", "Harlin", 90.267);
  cout << endl << endl;

  cout << "Testing displayList..." << endl;
  csClass.displayList();

/**
  cout << "Testing deleteNode... Removing Sally Holland from list...." << endl;
  csClass.deleteNode("Sally", "Holland");

  cout << "Testing displayList again..." << endl;
  csClass.displayList();
**/

  cout << "Testing deconstructor..." << endl;
  delete csClass;
  
  cout << "Testing complete.... Goodbye..." << endl << endl;
  return 0;
}
