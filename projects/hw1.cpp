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

void readFile(TeamInfo *list, string fileName);

//void printTeam(TeamInfo[] list);

//void sortWinningPercent(TeamInfo[] list);

//void printAll(TeamInfo[] list);

//void printDivision(TeamInfo[] list);

void goodbye();

int main()
{
  TeamInfo *list = nullptr;
  int menuChoice = 0;
  int numOfTeams = 0;

  welcome();

  while (numOfTeams < 1)  {
  cout << "How many teams? ";
  cin >> numOfTeams;
  }

  list = new TeamInfo[numOfTeams]; //inializating array for TeamInfo
//while(menuChoice != QUIT) {
//  while(menuChoice != PRINT_ALL && menuChoice != SORT_WIN_PERC && menuChoice
    //  != PRINT_DIV) {
  menuChoice = getMenuChoice();
//}
  readFile(*list, DATA);
//  switch(menuChoice)
  //{
  //  case PRINT_ALL :
  //  {
    //  printAll();
      //menuChoice = getMenuChoice();
    //  break;
    //}
  //}
//}

  for(int index = 0; index < sizeof(*list); index++) {
    cout << list[index].city
          << " " << list[index].mascot;
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

void readFile(string fileName)
{
  ifstream inFile;
  int count;

  inFile.open(fileName);

  if(!inFile.fail()) {
      for(int index = 0; index < count; count++) {
        inFile >> list[index].city
               >> list[index].mascot
               >> list[index].confDiv
               >> list[index].wins
               >> list[index].losses
               >> list[index].ties
               >> list[index].winningPercent;
    }
  }
}

//void printAll()
//{
  //cout << " in print all fxn" << endl;
//}

void goodbye()
{
  cout << "Quiting program.... Goodbye!" << endl << endl;
}
