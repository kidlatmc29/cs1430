// Isabel Ovalles
// Queue.h

class Queue {
  private:
    int *queueArray;
    int queueSize;
    int front;
    int rear;
    int numElements;

  public:
    // constructor
    Queue(int size);
    // deconstructor
    ~Queue();

    // operations

    void enqueue(int num);
    // adds an element to the rear
    int dequeue();
    // removes an element from the front
    bool isEmpty();
    bool isFull();

    void printArr();
};
