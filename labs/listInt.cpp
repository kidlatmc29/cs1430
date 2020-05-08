#include <iostream>
using namespace std;
#include "listIntSpring.h"

ListInt::ListInt(): head(nullptr)
{ }
bool ListInt::IsEmpty()const
{
        return (head == nullptr);
}
void ListInt::Add(int x)
{
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
