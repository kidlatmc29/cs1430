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
  string mascot;
  string confDiv;
  int wins;
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
const string WIN_PERC = "Winning%";
const int PRINT_ALL = 1;
const int SORT_WIN_PERC = 2;
const int PRINT_DIV = 3;
const int QUIT = 4;

void welcome();

int getMenuChoice();

void readFile(string fileName, int numOfTeams, TeamInfo *ptr);

//void printTeam(TeamInfo[] list);

//void sortWinningPercent(TeamInfo[] list);

//void printAll(TeamInfo[] list);

//void printDivision(TeamInfo[] list);

void goodbye();

int main()
{
  TeamInfo *records = nullptr;
  int menuChoice = 0;
  int numOfTeams = 0;

  welcome();

  while (numOfTeams < 1)  {
  cout << "How many teams? ";
  cin >> numOfTeams;
  }

  records = new TeamInfo[numOfTeams]; //inializating array of TeamInfo

  menuChoice = getMenuChoice();
  cout << "Your menu choice was " << menuChoice << endl << endl;

  readFile(DATA, numOfTeams, records);

  // to print out list
  for(int index = 0; index < numOfTeams; index++) {
    cout << records[index].city
          << " " << records[index].mascot;
    cout << endl;
  }

  goodbye();
  return 0;
}

void welcome()
{
  cout << endl << endl << "Welcome!" << endl << endl;
}

int getMenuChoice()
{
  int choice;
  cout << "[MENU]" << endl
       << "  1 - Display all teams and their winning percentage" << endl
       << "  2 - Display individual division standings" << endl
       << "  3 - Sort teams by winning percentage" << endl
       << "  4 - Quit";
  cout << endl << "Please choose a selection: ";
  cin >> choice;

  return choice;
}

void readFile(string fileName, int numOfTeams, TeamInfo *ptr)
{
  ifstream inFile;
  int count = numOfTeams;

  inFile.open(fileName);

  if(!inFile.fail()) {
      for(int index = 0; index < count; index++) {
        inFile >> records[index].city
               >> records[index].mascot
               >> records[index].confDiv
               >> records[index].wins
               >> records[index].losses
               >> records[index].ties
               >> records[index].winningPercent;
    }
  }
  inFile.close();
}

//void printAll()
//{
  //cout << " in print all fxn" << endl;
//}

void goodbye()
{
  cout << "Quiting program.... Goodbye!" << endl << endl;
}
