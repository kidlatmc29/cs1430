// Isabel Ovalles
// Message.cpp

#include "Message.h"
#include <iostream>

using namespace std;

Message::Message(): head(nullptr)
{
  cout << "inside null ctr" << endl;
}

Message::MessageNode::MessageNode(char val, int num)
{
//  cout << "inside message node constructor " << endl;
  letter = val;
  position = num;
  next = nullptr;
}

void Message::print()const
{
  MessageNode* index = this->head;
  while(index != nullptr) {
    cout << index->letter << " " << index->position << endl;
    index = index->next;
  }
  cout << endl << endl;
}

void Message::append(char l, int p)
{
  cout << "Adding node..." << l << " " << p << endl;
  MessageNode* indexPtr;
  MessageNode* nodePtr = new MessageNode(l, p);
  nodePtr->next = nullptr;
  if(isEmpty()) {
      head = nodePtr;
    } else {
      indexPtr = head;
      while(indexPtr->next != nullptr) {
      indexPtr = indexPtr->next;
    }
    indexPtr->next = nodePtr;
  }
}

bool Message::isEmpty()
{
  return head == nullptr;
}
