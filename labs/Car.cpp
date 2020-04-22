// Isabel Ovalles
// Car.cpp

#include "Car.h"
using namespace std;

Car::Car(int givenYearModel, string givenMake)
{
  yearModel = givenYearModel;
  make = givenMake;
  speed = 0;
}

int Car::getyearModel()
{
  return yearModel;
}

string Car::getMake()
{
  return make;
}

int Car::getSpeed()
{
  return speed;
}

void Car::accelerate()
{
  speed = speed + 5;
}

void Car::brake() {
  speed = speed - 5;
}
