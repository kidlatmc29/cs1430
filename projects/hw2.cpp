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

void welcome();

void goodbye();

int main()
{
  int input;
  welcome();

  cout << "Creating set a...." << endl;
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

  IntegerSet *union = new IntegerSet();
  cout << "Union of set A and set B: " << endl << endl;
  //union = setA->unionOfSets(setB);

  IntegerSet *intersection = new IntegerSet();
  cout << "Intersection of set A and set B: " << endl << endl;
  intersection = setA->intersectionOfSets(setB);
  intersection->printSet();

  cout << "Equality of set A and set B: " << endl;
  // see if set a and b are equal
  if(setA->isEqualTo(setB) == true) {
    cout << "Set A and set B are equal" << endl << endl;
  } else {
    cout << "Set A and set B are not equal" << endl << endl;
  }

  cout << "Please give an integer to insert into set A: " << endl;
  cin >> input;

  cout << "Inserting " << input << "into set A..." << endl;
  setA->inputSet(input);
  cout << "Set A is now: " << endl;
  setA->printSet();

  // delete recently added integer from set a
  // print set a

  // create a set with a given numOfelemt value and elements
  // print out values that are invalid

  // print out set c

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
  cout << "Goodbye!"
       << endl << endl;
}
