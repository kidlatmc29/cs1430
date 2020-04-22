// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet() {
  set = new int[INITIAL_SIZE];
  emptySet(set, INITIAL_SIZE);
}

IntegerSet::IntegerSet(int arr[], int numOfElements) {

}


void printElement(int *set, int numOfElements, int size) {
  cout << L_BRAC << " ";
  for(int index = 0; index < numOfElements; index++) {
    cout <<
  }
  cout << R_BRAC;
}

void inputSet(int* set, int newElement, int numOfElements, int size) {
  if(numOfElements + 1 > size) {
    // resize set AKA create a new set here
  } else if (numOfElements++ <= size)
    set[numOfElements+ 1] = newElement;
    numOfElements++;
}

void IntegerSet::emptySet(int* set, int size) {
  for(int index = 0; index < numOfElements; index++) {
    set[index] = 0;
  }
}
