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

void insertElement()
{
    int newArr[size + 1];
    for(int index = 0; index < size - 1; index++) {
      newArr[index] = set[index];
    }

    newArr[size] = 0;
    *set = &newArr; // set the pointer to the new array?
    size++; // updates array size
}

void IntegerSet::printSet() {
  cout << L_BRAC;
  for(int index = 0; index < numOfElements; index++) {
      cout << set[index] << " ";
  }
  cout << R_BRAC;
}

void IntegerSet::inputSet(int newElement) {
  cout << newElement << endl;
  if(numOfElements + 1 > size) {
    insertElement();
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
