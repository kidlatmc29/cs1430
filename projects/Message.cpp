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

}

void Message::append(char l, int p)
{
  MessageNode* indexPtr;
  MessageNode* nodePtr = new MessageNode(l, p);
  cout << "Adding node..." << nodePtr->letter << " " << nodePtr->position << endl;
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
