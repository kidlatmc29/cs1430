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

const int CITY_SPACES = 16;
const int TEAM_SPACES = 12;
const int CONF_SPACES = 13;
const int WINS_SPACES = 10;
const int LOSSES_SPACES = 10;
const int TIES_SPACES = 3;
const int WIN_PERC_SPACES = 10;

const int SCREEN_HEIGHT = 25;

void welcome();

int getMenuChoice();
// returns an integer that signifies the user's choice
// only returns valid choices

void readFile(string fileName, int numOfTeams, TeamInfo *records);
// reads in a number of teams (num supplied by the user), from a text file
// the information is then stored in a array of structs

void sortWinningPercent(TeamInfo *records, int numOfTeams);
// does a selection sort on the array based on winning percentages
// sorted in non-descending order

void printAll(TeamInfo *records, int numOfTeams);
// prints all teams in records, as well as their winning percentages

void printDivision(TeamInfo *records, int numOfTeams);
// asks the user a conference and division
// prints out all the teams in that conf and div

void swapTeam(TeamInfo *records, int index, int indexSwap);
// swaps a TeamInfo struct with another
// used in sortWinningPercent();

void clearScreen();
// prints 25 lines of \n
// used for formatting

void pause();
// waits for the user to press enter before continuing
// used for formatting

void goodbye(TeamInfo *records);
// deallocates memory used by array
// tells the user the program is terminating

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
        clearScreen();
        break;
      }
      case PRINT_DIV :
      {
        clearScreen();
        printDivision(records, numOfTeams);
        menuChoice = getMenuChoice();
        clearScreen();
        break;
      }
      case SORT_WIN_PERC :
      {
        clearScreen();
        sortWinningPercent(records, numOfTeams);
        menuChoice = getMenuChoice();
        clearScreen();
        break;
      }
    }
  }
  goodbye(records);
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
  pause();
}

void printDivision(TeamInfo *records, int numOfTeams)
{
  string conference;
  string division;
  string confDiv;
  string targetConfDiv;

  cout << "What conference would you like? (NFC or AFC)? ";
  cin >> conference;

  cout << "What division within the " << conference
       << " would you like (East, West, South, North)? ";
  cin >> division;

  targetConfDiv = conference + "_" + division;

  // col labels for table
  cout << setw(CITY_SPACES) << CITY
       << setw(TEAM_SPACES) << TEAM
       << setw(CONF_SPACES) << CONF;
  cout << right << setw(WINS_SPACES) << WINS
       << setw(LOSSES_SPACES) << LOSSES
       << setw(WIN_PERC_SPACES) << WIN_PERC
       << endl;

  //printing out the teams in the chosen conf and div
  for(int index = 0; index < numOfTeams; index++) {
    confDiv = records[index].confDiv;
    if(confDiv == targetConfDiv) {
      cout << setw(CITY_SPACES) << records[index].city
           << setw(TEAM_SPACES) << records[index].mascot;
      cout << right << setw(CONF_SPACES) << records[index].confDiv
           << setw(WINS_SPACES) <<  records[index].wins
           << setw(LOSSES_SPACES) <<  records[index].losses
           << setw(WIN_PERC_SPACES) << records[index].winningPercent
           << endl;
    }
  }
  pause();
}

void sortWinningPercent(TeamInfo *records, int numOfTeams)
{
  int indexSwap;
  for(int index = 0; index < numOfTeams; index++) {
    indexSwap = index;
    for(int j = index + 1; j < numOfTeams; j++) {
      if(records[j].winningPercent > records[indexSwap].winningPercent) {
        indexSwap = j;
      }
    }
    swapTeam(records, index, indexSwap);
  }
  cout << "Sorting complete...." << endl;
  pause();
}

void swapTeam(TeamInfo *records, int index, int indexSwap) {
  TeamInfo temp = records[index];
  records[index] = records[indexSwap];
  records[indexSwap] = temp;
}

void clearScreen()
{
  for(int i = 0; i < SCREEN_HEIGHT; i++)
    cout << endl;
}

void pause()
{
  cin.clear();
  cin.ignore();
  cout << "Press enter to continue....";
  cin.get();
  cout << endl;
}

void goodbye(TeamInfo *records)
{
  clearScreen();

  delete [] records;
  records = nullptr;

  cout << "Quiting program.... Goodbye!" << endl << endl;
}
