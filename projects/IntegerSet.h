// Isabel Ovalles
// IntegerSet.h

using namespace std;

class IntegerSet {
  public:
    IntegerSet();
    IntegerSet(int arr[], int numOfElements);

  //  IntegerSet* unionOfSets(IntegerSet *otherSet);
  //  IntegerSet* inters ectionOfSets(IntegerSet *otherSet);

  //  void insertElement();
    void deleteElement();

    void printSet();

  //  bool isEqualTo(IntegerSet *setB);

  // void inputSet();

  //  int* getArray();

  private:
     const int MAX_SIZE = 101;
     const int MAX_VAL = 100;
     const int MIN_VAL = 0;
     const int STOP = -1;
     const char L_BRAC = '{';
     const char R_BRAC = '}';

    int set[101];

    void emptySet();
  //  bool validEntry(int entry);

};
