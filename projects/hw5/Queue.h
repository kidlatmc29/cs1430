// Isabel Ovalles
// Queue.h

class Queue {
  private:
    int *queueAray;
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
    void eneqeue(int num);
    int dequeue();
    bool isEmpty();
    bool isFull();
};
