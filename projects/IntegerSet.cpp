// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet() {
  set = new int[INITIAL_SIZE];
  size = INITIAL_SIZE;
  numOfElements = 0;
  emptySet();
}

IntegerSet::IntegerSet(int arr[], int arrLength) {
  set = new int[arrLength];
  size = arrLength;
  for(int index = 0; index < size; index++) {
    set[index] = arr[index];
    numOfElements++;
  }
}

void IntegerSet::printSet() {
  cout << L_BRAC;
  for(int index = 0; index < numOfElements; index++) {
    if(index > numOfElements - 1) {
      cout << set[index] << ", ";
    }
  }
  cout << R_BRAC;z
}

void IntegerSet::inputSet(int newElement) {
  cout << newElement << endl;
  if(numOfElements + 1 > size) {
    cout << "you need to resize the underlying array!";
    // resize set AKA create a new set here
  } else {
    set[numOfElements + 1] = newElement;
    numOfElements++;
  }
}

void IntegerSet::emptySet() {
  for(int index = 0; index < numOfElements; index++) {
    set[index] = 0;
  }
}
