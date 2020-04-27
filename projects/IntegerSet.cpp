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

void IntegerSet::emptySet()
{
  for(int index = 0; index < MAX_SIZE; index++)
    set[index] = 0;
}
