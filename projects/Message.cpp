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
