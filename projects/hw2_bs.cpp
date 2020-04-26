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
const int CSIZE = 5;

void welcome();

void goodbye();

int main()
{
  int input;
  int arrC[CSIZE] = {-1, 29, 8, 2001, 54};
  welcome();

  cout << "Creating set A...." << endl;
  IntegerSet *setA = new IntegerSet();

  while(input != STOP) {
    cout << "Enter an integer for set A (enter -1 to stop): ";
    cin >> input;
    setA->inputSet(input);
  }
  input = 0;
  setA->printSet();

  cout << endl << endl;;

  cout << "Creating set b....." << endl << endl;
  IntegerSet *setB = new IntegerSet();

  while(input != STOP) {
    cout << "Enter integers for set B (enter -1 to stop): ";
    cin >> input;
    setB->inputSet(input);
  }
  setB->printSet();
  cout << endl;

/**
  IntegerSet *unionOf = new IntegerSet();
  cout << "Union of set A and set B: " << endl << endl;
  unionOf = setA->unionOfSets(setB);
  unionOf->printSet();
  cout << endl;

  IntegerSet *intersection = new IntegerSet();
  cout << "Intersection of set A and set B: " << endl;
  intersection = setA->intersectionOfSets(setB);
  intersection->printSet();
  cout << endl;
**/

  cout << endl << "Equality of set A and set B: " << endl;

  if(setA->isEqualTo(setB) == true) {
    cout << "Set A and set B are equal" << endl << endl;
  } else {
    cout << "Set A and set B are not equal" << endl << endl;
  }

  cout << "Please give an integer to insert into set A: ";
  cin >> input;

  cout << "Inserting " << input << " into set A..." << endl;
  setA->inputSet(input);
  cout << "Set A is now: " << endl;
  setA->printSet();

  cout << "Deleting " << input << " from Set A..." << endl;
  cout << "Set A is now: " << endl;
  setA->printSet();

  cout << "Creating array of size 5: {-1, 29, 8, 2001, 54}" << endl;
  IntegerSet *setC = new IntegerSet(arrC, CSIZE);
  setC->printSet();

  goodbye();
  return 0;
}

void welcome()
{
  cout << endl << endl
       << " - Welcome to the IntegerSet Program - " << endl;
}

void goodbye()
{
  cout << endl << endl << "Goodbye!"
       << endl << endl;
}
