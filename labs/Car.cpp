// Isabel Ovalles
// Car.cpp

#include "Car.h"

Car::Car(int givenYearModel, string givenMake)
{
  yearModel = givenYearModel;
  make = givenMake;
  speed = 0;
}

int getyearModel()
{
  return yearModel;
}

string getMake()
{
  return make;
}

string getSpeed()
{
  return speed;
}

void accelerate(int speed)
{
  speed = speed + 5;
}
void brake(int speed) {
  speed = speed - 5;
}
