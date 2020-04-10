// Isabel Ovalles
// hw1.cpp
// 4/19/2020

#include <iostream>
#include <fstream>

using namespace std;

struct TeamInfo {
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

void readFile(string fileName);

void welcome();

void printTeam(TeamInfo[] list);

void sortWinningPercent(TeamInfo[] list);

void printAll(TeamInfo[] list);

void printDivision(TeamInfo[] list);

void goodbye();

int main()
{
  


  welcome();

  cout << "[MENU]" << endl
       << "1 - Display all teams and their winning percentage"
       << "2 - Display individual division standings"
       << "3 - Sort teams by winning percentage"
       << "4 - Quit";

  goodbye();
  return 0;
}

void welcome()
{
  cout << endl << endl << "Welcome!" << endl;

}

void goodbye()
{
  cout << "Quiting program.... Goodbye!" << endl << endl;
}
