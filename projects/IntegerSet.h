// Isabel Ovalles
// IntegerSet.h

using namespace std;

class IntegerSet {
  public:
    IntegerSet();
    IntegerSet(int[] arr, int numOfElements);

    IntegerSet unionOfsets();
    IntegerSet intersectionOfSets();

    void insertElement();
    void deleteElement();

    void printElement();

    bool isEqualTo();

    void emptySet();
    void inputSet();

  private:
    const int MAX_VAL = 100;
    const int MIN_VAL = 0;
    int numOfElements;
    bool validEntry();

}
