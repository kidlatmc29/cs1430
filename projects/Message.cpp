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
  MessageNode* index = head;

  while(index != nullptr) {
    cout << index->character;
    index = index->next;
  }

  cout << endl << endl;
}

void Message::insert(char character, int position)
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

bool Message::isEmpty()
{
  return head == nullptr;
}
