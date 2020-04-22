// Isabel Ovalles
// Car.h

using namespace std;

class Car {
  private:
    int yearModel;
    string make;
    int speed;

  public:
      int getyearModel();
      string getMake();
      string getSpeed();

      void accelerate(int speed);
      void brake(int speed);
}
