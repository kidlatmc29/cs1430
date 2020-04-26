// Isabel Ovalles
// IntegerSet.h

using namespace std;

class IntegerSet {
  public:
    IntegerSet();
    IntegerSet(int arr[], int numOfElements); //need to figure out arr or ptr

  //  IntegerSet unionOfSets(IntegerSet *otherSet);
  //  IntegerSet intersectionOfSets();

    void insertElement();
  //  void deleteElement();

    void printSet();

    bool isEqualTo(IntegerSet *setB);

    void inputSet(int newElement);

    int getSize();
    int getNumOfElements();
    int* getArray();

  private:
    const int MAX_VAL = 100;
    const int MIN_VAL = 0;
    const int END_OF_SET = -1;
    const int INITIAL_SIZE = 3;
    const char L_BRAC = '{';
    const char R_BRAC = '}';

    int *set = nullptr;
    int numOfElements; // tracks num of elements in set
    int size; // tracks the total size of the set

    void emptySet();

    void selectionSort();
    void swapInts(int index, int indexSwap);
  //  bool validEntry();

};
