// Isabel Ovalles
// hw1.cpp
// 4/19/2020

// Purpose:

// Input:

// Processing:

// Output:

// Examples:


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct TeamInfo
{
  string city;
  string teamName;
  string teamMascot;
  string confDiv;
  int win;
  int losses;
  int ties;
  double winningPercent;
};

const string DATA = "NFLdata.txt";
const string CITY = "City";
const string TEAM = "TEAM";
const string CONF = "Conf/Div";
const string WINS = "Wins";
const string LOSSES = "Losses";
const string WINPERC = "Winning%";

//void readFile(string fileName);

void welcome();

//void printTeam(TeamInfo[] list);

//void sortWinningPercent(TeamInfo[] list);

//void printAll(TeamInfo[] list);

//void printDivision(TeamInfo[] list);

void goodbye();

int main()
{
  int choice = 0;

  welcome();

while(choice == 0) {
  cout << "[MENU]" << endl
       << "  1 - Display all teams and their winning percentage" << endl
       << "  2 - Display individual division standings" << endl
       << "  3 - Sort teams by winning percentage" << endl
       << "  4 - Quit";
  cout << endl << "Please choose a selection: ";
  cin >> choice;



}

  goodbye();
  return 0;
}

void welcome()
{
  cout << endl << endl << "Welcome!" << endl >> endl;

}

void goodbye()
{
  cout << "Quiting program.... Goodbye!" << endl << endl;
}
