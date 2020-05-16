// Isabel Ovalles
// Message.cpp

#include "Message.h"
#include <iostream>

using namespace std;

Message::Message(): head(nullptr)
{
}

Message::MessageNode::MessageNode(char character, int position)
{
  //  cout << "inside message node constructor " << endl;
  this->character = character;
  this->position = position;
  next = nullptr;
}

void Message::print()const
{
  cout << "Inside print fxn" << endl;
  MessageNode* index = head;
  cout << "head is " << head << endl;
  // head is the same in insert but is nullptr in print?

  if(index == nullptr) {
    cout << "index was null!" << endl; // only for debugging - rm when fixed
    return;
  }

  while(index != nullptr) {
    cout << index->character << " ";
    index = index->next;
  }

  cout << endl << endl;
}

void Message::insert(char character, int position)
{
  MessageNode* newNode = new MessageNode(character, position);
// cout << "newNode is " << newNode->letter << " " << newNode->position << endl;
  MessageNode* index;
  MessageNode* previous;

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
  cout << "head is now " << head << endl; // only for debugging - rm when fixed
    // testing shows head stays the same-
}

bool Message::isEmpty()
{
  return head == nullptr;
}
