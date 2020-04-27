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

void IntegerSet::printSet()
{
  cout << L_BRAC;
  for(int index = 0; index < MAX_SIZE; index++)
  {
    if(set[index] == 1 && (index + 1) != MAX_SIZE) {
      cout << index << " ";
    } else if(set[index] == 1) {
      cout << index;
    }
  cout << R_BRAC;
}

void IntegerSet::emptySet()
{
  for(int index = 0; index < MAX_SIZE; index++)
    set[index] = 0;
}
