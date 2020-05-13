// Isabel Ovalles
// Message.cpp

#include "Message.h"
#include <iostream>

using namespace std;

Message::Message(): head(nullptr)
{
  cout << "inside null ctr" << endl;
}

Message::MessageNode::MessageNode(int num, char val):position(num),letter(val),
  next(nullptr)
{
  cout << "inside message node constructor " << endl;
}

void Message::print()const
{
  MessageNode* index = head;
  while(index) {
    cout << index->position << " " << index->letter << endl;
    index = index->next;
  }
}

void Message::append(int p, char l)
{
  cout << "Adding node..." << p << " " << l << endl;
  MessageNode* indexPtr;
  MessageNode* nodePtr = new MessageNode(p, l);
  nodePtr->next = nullptr;
  if(isEmpty()) {
      head = nodePtr;
    } else {
      indexPtr = head;
      while(indexPtr->next) {
      indexPtr = indexPtr->next;
      indexPtr->next = nodePtr;
    }
  }
}

bool Message::isEmpty()
{
  return head == nullptr;
}
