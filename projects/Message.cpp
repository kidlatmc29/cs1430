// Isabel Ovalles
// Message.cpp

#include "Message.h"
#include <iostream>

using namespace std;

Message::Message(): head(nullptr)
{
  cout << "inside null ctr" << endl;
}

Message::MessageNode::MessageNode(char l, int p)
{
//  cout << "inside message node constructor " << endl;
  letter = l;
  position = p;
  next = nullptr;
}

void Message::print()const
{
  cout << "Inside print fxn" << endl;
  MessageNode* index = head;
  cout << "head is " << head << endl;
  cout << "index is " << index << endl;

  if(index == nullptr) {
    cout << "index was null!" << endl;
    return;
  }
  while(index != nullptr) {
    cout << index->letter << " ";
    index = index->next;
  }

  cout << endl << endl;
}

void Message::insert(char l, int p)
{
  MessageNode* newNode = new MessageNode(l, p);
// cout << "newNode is " << newNode->letter << " " << newNode->position << endl;
  MessageNode* index;
  MessageNode* previous;

//  cout << "Inserting node..."
//       << newNode->letter << " " << newNode->position << endl;

  if(head == nullptr) {
    head = newNode;
    newNode->next = nullptr;
  } else {
    index = head;
    previous = nullptr;
    while(index != nullptr && index->position < p) {
      previous = index;
      index = index->next;
    }
    if(previous == nullptr) {
      head = newNode;
      newNode->next = index;
    } else {
      previous->next = newNode;
      newNode->next = index;
    }
  }
  cout << "head is now " << head << endl;
}

bool Message::isEmpty()
{
  return head == nullptr;
}
