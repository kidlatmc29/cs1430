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

void IntegerSet::insertElement()
{
    int* temp = new int[size + 1];
    for(int index = 0; index < size; index++) {
      temp[index] = set[index];
  }
  delete []set; // deletes the array pointed to by "set"
  set = temp; //changes to the address of the new array
  size++;
}

void IntegerSet::printSet()
 {
  cout << L_BRAC;
  for(int index = 0; index < numOfElements; index++) {
      cout << set[index] << " ";
  }
  cout << R_BRAC;
}

void IntegerSet::inputSet(int newElement)
{
  if(numOfElements + 1 > size) {
    insertElement();
  }

  if(newElement != END_OF_SET) {
    set[numOfElements] = newElement;
    numOfElements++;
  }
}

void IntegerSet::emptySet()
{
  for(int index = 0; index < numOfElements; index++) {
    set[index] = 0;
  }
}

int IntegerSet::getSize()
{
  return size;
}

int IntegerSet::getNumOfElements()
{
  return numOfElements;
}
