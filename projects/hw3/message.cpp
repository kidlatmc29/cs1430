// Isabel Ovalles
// Message.cpp

#include "message.h"
#include <iostream>

using namespace std;

message::message(): head(nullptr)
{
}

message::MessageNode::MessageNode(char character, int position)
{
  this->character = character;
  this->position = position;
  next = nullptr;
}

void message::print()const
{
  MessageNode* index = head;

  while(index != nullptr) {
    cout << index->character;
    index = index->next;
  }

  cout << endl << endl;
}

void message::insert(char character, int position)
{
  MessageNode* newNode = new MessageNode(character, position);
  MessageNode* index;
  MessageNode* previous;

  if(head == nullptr) {
    head = newNode;
    newNode->next = nullptr;
  } else {
    index = head;
    previous = nullptr;
    while(index != nullptr && index->position < position) {
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
}

bool message::isEmpty()
{
  return head == nullptr;
}

void message::clearList()
{
  MessageNode *nodePtr = this->head;
  MessageNode *nextPtr;
  while(nodePtr != nullptr) {
    nextPtr = nodePtr->next;
    delete nodePtr;
    nodePtr = nextPtr;
  }
  head = nullptr;
}
