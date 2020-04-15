// Isabel Ovalles
// hw1.cpp
// 4/19/2020

// Purpose: This program helps analyze NFL standings. The program can do four
//  different types of analysis: printing the entire record of teams with their
//  winning percentage, printing an entire confrence and division, with all of
//  the teams info, and finally sorting the entire records of teams based on
// their winning percentage.

// Input: Data is given from a text file with various information about a team.

// Processing: The data read from the text file is placed into a TeamInfo
//  struct.

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
const int PRINT_DIV = 2;
const int SORT_WIN_PERC = 3;
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

//void printTeam(TeamInfo *records, int numOfTeams);

//void sortWinningPercent(TeamInfo *records, int numOfTeams);

void printAll(TeamInfo *records, int numOfTeams);

void printDivision(TeamInfo *records, int numOfTeams);

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

while(menuChoice != QUIT) {
  while(menuChoice < PRINT_ALL || menuChoice > QUIT) {
    clearScreen();
    menuChoice = getMenuChoice();
  }

    switch(menuChoice)
    {
      case PRINT_ALL :
      {
        clearScreen();
        printAll(records, numOfTeams);
        menuChoice = getMenuChoice();
        break;
      }
      case PRINT_DIV :
      {
        clearScreen();
        printDivision(records, numOfTeams);
        menuChoice = getMenuChoice();
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

void printDivision(TeamInfo *records, int numOfTeams)
{
  string conference;
  string division;

  cout << "What conference would you like? (NFC or AFC)? ";
  cin >> conference;

  cout << "What division within the " << conference
       << " would you like (east, west, south, north)?";
  cin >> division;

  cout << "you want division standings for: " << conference << " " << division;
  cout << endl << endl;
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
