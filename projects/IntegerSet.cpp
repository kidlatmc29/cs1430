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
    inputSet(arr[index]);
  }
}

/*
IntegerSet* IntegerSet::unionOfSets(IntegerSet *otherSet)
{
  int cSize;
  int otherSetSize = otherSet->getSize();
  int *otherArr = otherSet->getArray();

  if(otherSetSize > size) {
    cSize = otherSetSize;
  } else {
    cSize = size;
  }

  IntegerSet *setC = new IntegerSet();

  // need to sort through setA and set B!!!!!

  for(int index = 0; index < numOfElements; index++) {
    if(set[index] != otherArr[index]) {
      setC[index] = set[index];
    }
  }

  for(int index = 0; index < otherSetSize; index++) {
    if(setC[otherArr[index]] == 0) {
      setC[otherArr[index]];
    }
  }

  return setC;
}

IntegerSet* IntegerSet::intersectionOfSets(IntegerSet *setB)
{
  int countA = 0;
  int countB = 0;
  int setBElements = setB->getNumOfElements();
  int *arrayB = setB->getArray();

  IntegerSet* setC = new IntegerSet();

  while(countA < numOfElements && countB < setBElements) {
    if(set[countA] < arrayB[countB]){
       countA++;
    } else if(arrayB[countB] < set[countA]) {
      countB++;
    } else {
      setC->inputSet(arrayB[countB]);
      countA++;
      countB++;
    }
  }
  return setC;
}
*/

void IntegerSet::insertElement()
{
    int tempSize = size + 1;
    int* temp = new int[tempSize];

    for(int index = 0; index < size; index++) {
      temp[index] = set[index];
  }

  temp[tempSize] = 1;
  delete []set; // deletes the array pointed to by "set"
  set = temp; //changes to the address of the new array
  size++;
}

void IntegerSet::deleteElement()
{
  int tempSize = size - 1;
  int* temp = new int[tempSize];

  for(int index = 0; index < size - 1; index++) {
    temp[index] = set[index];
  }

  temp[tempSize] = 0;
  delete []set; // deletes the array pointed to by "set"
  set = temp; //changes to the address of the new array
  size--;
}

void IntegerSet::printSet()
 {
  cout << L_BRAC;
  for(int index = 0; index < numOfElements; index++) {
    if(index < numOfElements - 1) {
      cout << set[index] << " ";
    } else {
      cout << set[index];
    }
  }
  cout << R_BRAC;
}

bool IntegerSet::isEqualTo(IntegerSet *setB)
{
  int count = 0;
  bool isEqual = true;
  int *arrB = setB->getArray();
  int numOfElementsB = setB->getNumOfElements();

  if(numOfElementsB != numOfElements) {
    return false;
  }

  while(isEqual && count < numOfElements) {
    if(set[count] != arrB[count]) {
      isEqual = false;
    }
    count++;
  }

  return isEqual;
}

void IntegerSet::inputSet(int newElement)
{
  if(numOfElements + 1 > size) {
    insertElement();
  }

  if(newElement != END_OF_SET && validEntry(newElement) == true) {
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

int* IntegerSet::getArray()
{
  return set;
}

void IntegerSet::selectionSort()
{
  int indexSwap;
  for(int index = 0; index < numOfElements; index++) {
    indexSwap = index;
    for(int j = index + 1; j < numOfElements; j++) {
      if(set[j] < set[indexSwap]) {
        indexSwap = j;
      }
    }
    swapInts(index, indexSwap);
  }
}

void IntegerSet::swapInts(int index, int indexSwap)
{
  int temp = set[index];
  set[index] = set[indexSwap];
  set[indexSwap] = temp;
}

bool IntegerSet::validEntry(int entry)
{
  for(int index = 0; index < numOfElements; index++) {
    if(entry > MAX_VAL || entry < MIN_VAL) {
      return false;
    }
  }
  return true;
}
