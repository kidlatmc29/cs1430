// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
  emptySet();
}

IntegerSet::IntegerSet(int arr[], int arrLength) {
  emptySet();
  for(int index = 0; index < MAX_VAL; index++) {
    set[arr[index]] = 1;
  }
}


void IntegerSet::insertElement(int input)
{
  bool valid = validEntry(input);
  if(valid) {
    set[input] = 1;
  }
}


void IntegerSet::printSet()
{
  bool isEmpty = true;
  string result;

  result += L_BRAC;
  for(int index = 0; index < MAX_SIZE; index++)  {
    if(set[index] == 1) {
      result += index + " ";
      isEmpty = false;
    }
  }

  if(isEmpty) {
    result += "-";
  }
   result += R_BRAC;

   cout << result << endl;
}

void IntegerSet::inputSet()
{
  int input;
  bool valid;

  cout << "Enter an integer for set (enter -1 to stop): ";
  cin >> input;

  while(input != STOP) {
    valid = validEntry(input);
    if(valid) {
      insertElement(input);
    }
    cout << "Enter an integer for the set (enter -1 to stop): ";
    cin >> input;
  }
}

void IntegerSet::emptySet()
{
  for(int index = 0; index < MAX_SIZE; index++) {
    set[index] = 0;
  }
}

 bool IntegerSet::validEntry(int entry)
 {
   if(entry > MAX_VAL || entry < MIN_VAL) {
     return false;
   }
   return true;
 }
