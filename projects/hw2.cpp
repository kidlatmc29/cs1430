// Isabel Ovalles
// hw2.cpp

// Summary: This program is to show the functionality of IntegerSet.

// Input: The user will be prompted to enter a series of integers to fill two
//  sets, A and B.

// Processing: These integers will be used to create IntegerSet objects.

// Output:

// Example:

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
  setC->validEntry();
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
