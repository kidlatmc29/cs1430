#ifndef LISTINT_H
#define LISTINT_H
#include <iostream>
using namespace std;

class ListInt
{
   private:

      class NodeInt
      {
        public:
          NodeInt(int dta = 0);
          int data;
          NodeInt* next;
      };

      NodeInt* head;
      void clearList();
      void copyList(const ListInt& src);
  public:
      ListInt();
      ListInt(const ListInt& temp);
    const ListInt& operator=(const ListInt& src);
      ~ListInt();
      bool IsEmpty()const;
      void Add(int x);
      void print()const;
};

#endif
