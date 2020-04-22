// Isabel Ovalles
// week3.cpp

using namespace std;

#include <iostream>;
#include "Car.h";

int main()
{

  cout << endl << endl;
  cout << "Welcome!";

  Car myCar = new Car(1993, "Honda");
  cout << "myCar is a " << myCar.getyearModel << " " << myCar.getMake << endl;

  cout << "Accelerating myCar: " << endl;
  for (int i = 0; i < 5; i++) {
    myCar.accelerate();
    cout << "Speed is " << myCar.getSpeed() << endl;
  }

  cout << "Braking myCar: " << endl;
  for (int i = 0; i < 5; i++) {
    myCar.brake();
    cout << "Speed is " << myCar.getSpeed() << endl;
  }

  cout << "Goodbye.....";
  cout << endl << endl;
  return 0;
}
