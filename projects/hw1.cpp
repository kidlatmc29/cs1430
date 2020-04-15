// Isabel Ovalles
// hw1.cpp
// 4/19/2020

// Purpose: This program helps analyze NFL standings. The program can

// Input: Data is given from a text file.

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

const string DATA_FILE = "NFLdata.txt";
const string CITY = "City";
const string TEAM = "Team";
const string CONF = "Conf/Div";
const string WINS = "Wins";
const string LOSSES = "Losses";
const string WIN_PERC = "Winning%";
const int PRINT_ALL = 1;
const int SORT_WIN_PERC = 2;
const int PRINT_DIV = 3;
const int QUIT = 4;
const int CITY_SPACES = 12;
const int TEAM_SPACES = 12;
const int CONF_SPACES = 10;
const int WINS_SPACES = 5;
const int LOSSES_SPACES = 5;
const int TIES_SPACES = 3;
const int WIN_PERC_SPACES = 10;
const int SCREEN_HEIGHT = 20;

void welcome();

int getMenuChoice();

void readFile(string fileName, int numOfTeams, TeamInfo *records);

//void printTeam(TeamInfo[] list);

//void sortWinningPercent(TeamInfo[] list);

void printAll(TeamInfo *records, int numOfTeams);

//void printDivision(TeamInfo[] list);

void clearScreen();

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
  readFile(DATA_FILE, numOfTeams, records);

  while(menuChoice < PRINT_ALL || menuChoice > QUIT) {
    menuChoice = getMenuChoice();
    clearScreen();
    switch(menuChoice)
    {
      case PRINT_ALL :
      {
        printAll(records, numOfTeams);
        menuChoice = getMenuChoice();
        clearScreen();
        break;
      }
    }
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

void readFile(string fileName, int numOfTeams, TeamInfo *records)
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

void printAll(TeamInfo *records, int numOfTeams) {
  cout << setw(CITY_SPACES) << "Team";
  cout << right << setw(WIN_PERC_SPACES) << "Winning%" << endl;

  for(int index = 0; index < numOfTeams; index++) {
    cout << setw(CITY_SPACES) << records[index].mascot;
    cout << right << setw(WIN_PERC_SPACES) << records[index].winningPercent;
    cout << endl;
  }
}

void clearScreen()
{
  for(int i = 0; i < SCREEN_HEIGHT; i++)
    cout << endl;
}

void goodbye()
{
  //deallocate mem here only for one array
  cout << "Quiting program.... Goodbye!" << endl << endl;
}
