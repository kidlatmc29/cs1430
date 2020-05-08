#include <iostream>
using namespace std;
#include "listInt.h"

ListInt::ListInt(): head(nullptr)
{ }

ListInt::ListInt(const ListInt& temp) : head(nullptr)
{
  NodeInt* newNode = temp.head;

  while(newNode != nullptr) {
    Add(newNode->data);
    newNode = newNode->next;
  }
}

ListInt::~ListInt()
{
  NodeInt *nodePtr;
  NodeInt *nextNode;

  nodePtr = head;

  while(nodePtr != nullptr) {
    nextNode = nodePtr->next;
    cout << "Deleting node... ";
    delete nodePtr;
    nodePtr = nextNode;
  }
}

bool ListInt::IsEmpty()const
{
        return (head == nullptr);
}

void ListInt::Add(int x)
{
        cout << "Adding node..." << endl;
        NodeInt* nodeptr = new NodeInt(x);
        nodeptr->next = nullptr;
        NodeInt* indexPtr;
        if(IsEmpty())
                head = nodeptr;
        else
        {
                indexPtr = head;
                while(indexPtr->next)
                        indexPtr = indexPtr->next;
                indexPtr->next = nodeptr;
        }
}

void ListInt::print()const
{
        NodeInt* indexPtr = head;
        cout << "The List:" << endl;
        while(indexPtr)
        {
                cout << indexPtr->data << endl;
                indexPtr= indexPtr->next;
        }
}

ListInt::NodeInt::NodeInt(int dta):data(dta),next(nullptr)
{ }
