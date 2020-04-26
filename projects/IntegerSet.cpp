// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
  emptySet();
}

IntegerSet::IntergetSet(int arr[], int arrLength) {
  for(int index = 0; index < MAX_VAL; index++) {
    if(arr[index] = index) {
      set[index] = 1;
    }
  }
}

void IntegerSet::emptySet()
{
  for(int index = 0; index < MAX_VAL; index++)
    set[index] = 0;
}

void IntegerSet::insertElement(int entry)
{
  int valid = validEntry(entry);
  if(valid) {
    set[entry] = 1;
  }
}

void IntergerSet::deleteElement(int entry) {
  int valid = validEntry(entry);
  if(valid) {
    set[entry] = 0;
  }
}

bool IntegerSet::validEntry(int entry)
{
  if(entry > MAX_VAL || entry < MIN_VAL) {
    return false;
  }
  return true;
}

void IntegerSet::inputSet()
{
  int input;
  bool valid;

  cout << "Enter an element (-1 to stop): ";
  cin >> input;
  valid = validEntry(entry);

  while(valid != STOP) {
    set[input] = 1;
    cout << "Enter an element between 0 and 100 (-1 to stop): ";
    cin >> input;
    valid = validEntry(entry);
  }

  cout << "Entry complete..." << endl;
}
