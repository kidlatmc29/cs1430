// Isabel Ovalles
// StudentList.cpp

#include <iostream>
#include "StudentList.h"

using namespace std;

StudentList::StudentList() : head(nullptr) {
  cout << "inside null ctor" << endl;
}

StudentList::StudentList::StudentNode(string fname, string lname, double grade)
{
  fName = fname;
  lName = lname;
  this.grade = grade;
  StudentNode* next = nullptr;
}

StudentList::~ListInt()
{
  cout << "inside dector" << endl;
}

bool StudentList::isempty() const
{
  return (head == nullptr);
}

void StudentList::append(string fname, string lname, double grade)
{

}

void StudentList::insert(string fname, string lname)
{

}

void StudentList::deleteNode(string fname, string lname)
{

}

void StudentList::displayList() const
{

}

bool StudentList::search(string fname, string lname)
{

}
