// Isabel Ovalles
// Car.h

#include <iostream>
#include <string>
using namespace std;

class Car {
  private:
    string make;
    int speed;
    int yearModel;

  public:
      Car(int givenYearModel, string givenMake);
      int getyearModel();
      string getMake();
      int getSpeed();

      void accelerate();
      void brake();
};
