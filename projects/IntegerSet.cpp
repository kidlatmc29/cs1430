// Isabel Ovalles
// IntegerSet.cpp

#include <iostream>
#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
  numOfElements = 0;
  emptySet();
}

IntegerSet::IntegerSet(int arr[], int arrLength) {
  emptySet();
  for(int index = 0; index < MAX_VAL; index++) {
    insertElement(set[arr[index]]);
  }
  numOfElements = arrLength;
}
/*
IntegerSet* IntegerSet::unionOfSets(IntegerSet *otherSet)
{
  int indexA = 0;
  int indexB = 0;
  int *elementB = setB->getArray();
  int arrC[MAX_SIZE];


  while(indexA < MAX_SIZE && indexB << MAX_SIZE) {
    if(set[indexA] {

    }
}

*/

IntegerSet IntegerSet::intersectionOfSets(IntegerSet *setB)
{
  int indexA = 0;
  int indexB = 0;
  int indexC = 0;

  int *elementB = setB->getArray();
  int arrC[101];

  while(indexA < MAX_SIZE && indexB < MAX_SIZE) {
    if(set[indexA] == 1 && elementB[indexB] == 1) {
      arrC[indexC] = indexA;
      indexC++;
    }
  }

  IntegerSet setC(arrC, indexC);
  return setC;
}

void IntegerSet::insertElement(int input)
{
  bool valid = validEntry(input);
  if(valid) {
    set[input] = 1;
    numOfElements++;
  }
}

void IntegerSet::deleteElement(int input) {
  bool valid = validEntry(input);
  if(valid) {
    set[input] = 0;
    numOfElements--;
  }
}


void IntegerSet::printSet()
{
  bool isEmpty = true;
  cout << L_BRAC;

  for(int index = 0; index < MAX_SIZE; index++) {
    if(set[index] == 1) {
      cout << " " << index << " ";
      isEmpty = false;
    }
  }

  if(isEmpty) {
    cout << "-";
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
      numOfElements++;
    }
    cout << "Enter an integer for set (enter -1 to stop): ";
    cin >> input;
  }
}

bool IntegerSet::isEqualTo(IntegerSet *setB)
{
  int indexA = 0;
  int indexB = 0;
  int *elementB = setB->getArray();

  if(numOfElements != setB->getNumOfElements()){
    return false;
  }

  while(set[indexA] == *elementB) {
    indexA++;
    indexB++;
    elementB = &elementB[indexB];
  }

  if(indexA != MAX_VAL || indexB || MAX_VAL) {
    return false;
  }
  return true;
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

 int IntegerSet::getNumOfElements()
 {
   return numOfElements;
 }

 int* IntegerSet::getArray()
 {
   return &set[0];
 }
