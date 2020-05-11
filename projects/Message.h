// Isabel Ovalles
// Message.h

#include <iostream>

using namespace std;

class Message {
  public:
    Message();
    // void print()const;
    // add node
    // print node
    // delete node
    // search for data
  private:
    class MessageNode {
      public:
        MessageNode(int position = 0, char letter = ' ');
        int position; // stores number given
        char letter; // stores character given
        MessageNode* next;
    };
    MessageNode* head;
};
