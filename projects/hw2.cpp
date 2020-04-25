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
  cout << endl;

  cout << "Creating set b....." << endl;
  IntegerSet *setB = new IntegerSet;

  while(input != STOP) {
    cout << "Enter integers for set B (enter -1 to stop): ";
    cin >> input;
    setB->inputSet(input);
  }
  setB->printSet();
  cout << endl;
  //perform union of sets a and b

  // perform intersection of sets a and b

  // see if set a and b are equal

  // ask the user to input a number into set a
  // insert given integer into set a
  //print set a

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
  cout << " Goodbye!"
       << endl << endl;
}
