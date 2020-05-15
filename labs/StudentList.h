// Isabel Ovalles
// StudentList.h

#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <iostream>

using namespace std;

class StudentList {
  private:
    class StudentNode {
      public:
        StudentNode(string fname, string lname, double grade);
        string fName;
        string lName;
        double grade;
        StudentNode* next;
    };

    StudentNode* head;

  public:
    StudentList();
    ~StudentList();
    bool isempty() const;
    // PLEASE GRADE "APPEND"
    void append(string fname, string lname, double grade);
    void insert(string fname, string lname, double grade);
    // PLEASE GRADE "DELETENODE"
    void deleteNode(string fname, string lname);
    void displayList() const;
    bool search(string fname, string lname);
};

#endif
