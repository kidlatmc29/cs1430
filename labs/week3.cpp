// Isabel Ovalles
// week3.cpp

using namespace std;

#include <iostream>
#include "Car.h"

int main()
{

  cout << endl << endl;
  cout << "Welcome!" << endl << endl;
  cout << "Creating a Car object....." << endl;
  Car *myCar = new Car(1993, "Honda");
  
  cout << "myCar is a " << myCar->getyearModel() << " " << myCar->getMake()
       << endl;
  cout << "julesCar is " << julesCar.getyearModel() << " " << julesCar.getMake()
       << endl;
  cout << endl;

  cout << "Accelerating myCar: " << endl;
  for (int i = 0; i < 5; i++) {
    myCar->accelerate();
    cout << "Speed is " << myCar->getSpeed() << endl;
  }

  cout << endl << endl;

  cout << "Braking myCar: " << endl;
  for (int i = 0; i < 5; i++) {
    myCar->brake();
    cout << "Speed is " << myCar->getSpeed() << endl;
  }

  delete myCar;
  myCar = nullptr;

  cout << endl << endl;
  cout << "Goodbye! ";
  cout << endl << endl;
  return 0;
}
