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
  cout << "Testing insert... " << endl;
  csClass.insert("Tony", "Wong", 67.45);
  csClass.insert("William", "Klein", 93.12);
  csClass.insert("Grace", "Zutter", 86.89);
  cout << endl << endl;

  cout << "Testing append... " << endl;
  csClass.append("Isabel", "Ovalles", 96.43);
  csClass.append("Sally", "Granger", 85.34);
  csClass.append("John", "Doe", 78.21);
  csClass.append("Julia", "Harlin", 90.267);
  cout << endl << endl;

  cout << "Testing displayList..." << endl;
  csClass.displayList();

  cout << "Testing search..." << endl;
  cout << "Searching for Yumeko Honda... " << endl;
  if(csClass.search("Yumeko", "Honda")) {
    cout << "Present in list." << endl;
  } else {
    cout << "Not present in list." << endl;
  }

  cout << endl << endl;

  cout << "Testing deleteNode... Removing John Doe from list...." << endl;
  csClass.deleteNode("John", "Doe");

  cout << "Testing displayList again..." << endl;
  csClass.displayList();

  cout << "Testing deconstructor..." << endl;
  //call the boi to destroy

  cout << "Testing complete.... Goodbye..." << endl << endl;
  return 0;
}
