// Isabel Ovalles
// hw2.cpp
// 4-28-2020

// Summary: This program is to show the functionality of class IntegerSet.

// Input: The user will be prompted to enter a series of integers to fill two
//  sets, A and B as well as inputing elements to add or delete.

// Processing: These integers will be used to create IntegerSet objects and
//  perform class methods on them.

// Output: Processes on the sets will be printed out to the console.

// Example: User inputs these two sets for A and B -
//  A: {1, 2, 3, 5, 13} B: {45, 65, 34, 13, 2}
//  Union of A and B -> {1, 2, 3, 5, 13, 34, 45, 65}
//  Intersection of A and B -> {2, 13}
//  Set and A B are not equal
//  User wants to add 29 to set A
//  Set A -> {1, 2, 3, 5, 13 ,29}
//  User wants to delete 2 from set A
//  Set A -> {1, 3, 5, 13, 29}
//  User wants to create an array C with size 5 and {11, 10, 2001, 12, -34}
//  Invalid attempt to insert 2001
//  Invalid attempt to insert -34
//  Set C -> {10, 11, 12}

#include <iostream>
#include "IntegerSet.h"

using namespace std;

const int STOP = -1;

int main()
{
  int input;
  bool isEqual;
  IntegerSet *setA = new IntegerSet();
  IntegerSet *setB = new IntegerSet();
// IntegerSet *setC = new IntegerSet();

  cout << endl << endl;

  cout << "Enter Set A: " << endl;
  setA->inputSet();

  cout << endl;

  cout << "Enter Set B: " << endl;
  setB->inputSet();

  cout << endl;
  setA->printSet();
  cout << endl;
  setB->printSet();
  cout << endl;

  cout << endl;
  cout << "Union of Set A and Set B:" << endl;
  // setA->unionOfSets(setB);
  cout << endl;

  cout << endl;
  cout << "Intersection of Set A and Set B: " << endl;
  setA->intersectionOfSets(setB);
  cout << endl;


  cout << endl;
  isEqual = setA->isEqualTo(setB);
  if(isEqual) {
    cout << "Set A and Set B are equal";
  } else {
    cout << "Set A and Set B are not equal";
  }
  cout << endl;

  cout << endl;
  cout << "Enter an integer to input into Set A: ";
  cin >> input;
  setA->insertElement(input);
  cout << "Set A is now: ";
  setA->printSet();
  cout << endl;

  cout << "Enter an integer to delete from Set A: ";
  cin >> input;
  setA->deleteElement(input);
  cout << "Set A is now: ";
  setA->printSet();
  cout << endl;


  delete setA;
  delete setB;
  cout << endl << endl;
  return 0;
}
