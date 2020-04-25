// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet() {
  set = new int[INITIAL_SIZE];
  emptySet(set, INITIAL_SIZE);
}

IntegerSet::IntegerSet(int arr[], int arrLength) {
  set = new int[arrLength];
  size = arrLength;
  for(int index = 0; index < size; index++) {
    set[index] = arr[index];
    numOfElements++;
  }
}

void IntegerSet::printElement(int *set, int numOfElements) {
  cout << L_BRAC;
  for(int index = 0; index < numOfElements; index++) {
    if(index > numOfElements - 1) {
      cout << set[index] << ", ";
    }
  }
  cout << R_BRAC;
}

void IntegerSet::inputSet(int* set, int newElement, int numOfElements, int size) {
  if(numOfElements + 1 > size) {
    // resize set AKA create a new set here
  } else if (numOfElements++ <= size) {
    set[numOfElements + 1] = newElement;
    numOfElements++;
  }
}

void IntegerSet::emptySet(int* set, int size) {
  for(int index = 0; index < numOfElements; index++) {
    set[index] = 0;
  }
}
