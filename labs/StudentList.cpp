// Isabel Ovalles
// StudentList.cpp

#include <iostream>
#include "StudentList.h"

using namespace std;

StudentList::StudentList() : head(nullptr) {
  cout << "inside null ctor" << endl;
}

StudentList::StudentNode::StudentNode(string fname, string lname, double grade)
{
  fName = fname;
  lName = lname;
  this->grade = grade;
  next = nullptr;
}

StudentList::~StudentList()
{
  cout << "inside dector" << endl;
}

bool StudentList::isempty() const
{
  return (head == nullptr);
}

void StudentList::append(string fname, string lname, double grade)
{
  StudentNode* newStudent = new StudentNode(fname, lname, grade);
  StudentNode* index;

  if(head == nullptr) {
    head = newStudent;
  } else {
    index = head;
    while(index->next) {
      index = index->next;
    }
    index->next = newStudent;
  }
}

void StudentList::insert(string fname, string lname)
{

}

void StudentList::deleteNode(string fname, string lname)
{
  StudentNode* index = head;
  StudentNode* previous;
  if(!head) {
    return;
  }

  if(head->fName == fname && head->lName == lname) {
    index = head->next;
    delete head;
    head = index;
  } else {
    while(index != nullptr && index->fName != fname && index->lName == lname) {
      previous = index;
      index = index->next;
    }
    if(search(fname, lname)) {
      previous->next = index->next;
      delete index;
    }
  }
}

void StudentList::displayList() const
{
  StudentNode* index = head;
  while(index) {
    cout << index->fName << " " << index->lName << " " << index->grade << endl;
    index = index->next;
  }

  cout << endl << endl;
}

bool StudentList::search(string fname, string lname)
{
  bool inList = false;
  StudentNode* index = head;
  while(index->next && !inList) {
    if(index->fName == fname && index->lName == lname) {
      inList = true;
    } else {
      index = index->next;
    }
  }
  return inList;
}
