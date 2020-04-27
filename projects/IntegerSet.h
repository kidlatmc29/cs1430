// Isabel Ovalles
// IntegerSet.h

using namespace std;

class IntegerSet {
  public:
    IntegerSet();
    IntegerSet(int arr[], int numOfElements);

  //  IntegerSet* unionOfSets(IntegerSet *otherSet);
    IntegerSet* intersectionOfSets(IntegerSet *otherSet);

    void insertElement(int input);
    void deleteElement(int input);

    void printSet();

    bool isEqualTo(IntegerSet *setB);

    void inputSet();

    int getNumOfElements();
    int* getArray();

  private:
    const int MAX_SIZE = 101;
    const int STOP = -1;
    const int MAX_VAL = 100;
    const int MIN_VAL = 0;
    const char L_BRAC = '{';
    const char R_BRAC = '}';

    int set[101];
    int numOfElements;

   void emptySet();
   bool validEntry(int entry);

};
