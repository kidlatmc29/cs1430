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
  cout << L_BRAC;

  for(int index = 0; index < MAX_SIZE; index++) {
    if(set[index] == 1) {
      cout << index << " ";
    }
  }

  cout << R_BRAC;
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
      set[input] = 1;
      cout << "input in set is " << set[input] << endl;
    }
    cout << "Enter an integer for set (enter -1 to stop): ";
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
     cout << "Invalid insert of " << entry << " attempted!" << endl;
     return false;
   }
   return true;
 }
