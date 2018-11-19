/*Homework 20
 Program Name: Rock, Paper, Scissors Game v0.1
 Purpose: Its a game, you play and hopfully have fun with.
 Author: Craig Arceneaux
 Copyright © 2018 Personal. All rights reserved.
 Development: 7 NOV 2018*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;


const int ROCK = 1,
PAPER = 2,
SCISSORS = 3;

//i didnt see a way to include this function.
void displayChoice(int choice){}

//Get User Input.
int getUserChoice(){
    int selection;

    cout << "\tPick your poison. Best of luck." << endl;
    cout << "\t-------------------------------" << endl;
    cout << "\t  1)   Rock" << endl;
    cout << "\t  2)   Paper" << endl;
    cout << "\t  3)   Scissors" << endl;
    cout << "\t  4)   Quit" << endl;
    cout << "\tEnter you choice...(1-4) : ";
    cin>>selection;
    cout << "" << endl;

    while (selection < 1 || selection > 4)
    {
        cout << "\tInput not accepted. Running Away? Here try again: ";
        cin >> selection;
        cout << "" << endl;
    }
    return selection;
}

//Get computers vast knowledge of RPS.
int getComputerChoice(){
    int compSelect = (rand()%3)+1;
    return compSelect;
}

//Pick me a winner
void determineWinner(int userChoice, int compChoice){
    //Rock
    if (userChoice == ROCK)
    {
        if (compChoice == ROCK)
        {
            cout << "\tYou picked: Rock \n";
            cout << "\tThe computer picked: Rock \n";
            cout << "\tTIE! Lame.\n";
        }
        else if (compChoice == PAPER)
        {
            cout << "\tYou picked: Rock \n";
            cout << "\tThe computer picked: Paper \n";
            cout << "\tPaper smothers Rock. YOU LOSE Muahaha! \n";
        }
        else if (compChoice == SCISSORS)
        {
            cout << "\tYou picked: Rock \n";
            cout << "\tThe computer picked: Scissors \n";
            cout << "\tRock smashes Scissors. YOU WIN! \n";
        }
    }
    //Paper
    if (userChoice == PAPER)
    {
        if (compChoice == ROCK)
        {
            cout << "\tYou picked: Paper \n";
            cout << "\tThe computer picked: Rock \n";
            cout << "\tPaper wraps Rock. YOU WIN! you got lucky. \n";
        }
        else if (compChoice == PAPER)
        {
            cout << "\tYou picked: Paper \n";
            cout << "\tThe computer picked: Paper \n";
            cout << "\tTIE! \n";
        }
        else if (compChoice == SCISSORS)
        {
            cout << "\tYou picked: Paper \n";
            cout << "\tThe computer picked: Scissors \n";
            cout << "\tScissors slices Paper. YOU LOSE lol! \n";
        }
    }
    //Scissors
    if (userChoice == SCISSORS)
    {
        if (compChoice == ROCK)
        {
            cout << "\tYou picked: Scissors \n";
            cout << "\tThe computer picked: Rock \n";
            cout << "\tRock smashes Scissors. YOU LOSE! \n";
        }
        else if (compChoice == PAPER)
        {
            cout << "\tYou picked: Scissors \n";
            cout << "\tThe computer picked: Paper \n";
            cout << "\tScissors cuts Paper slowly. YOU WIN! mom i did it.\n";
        }
        else if (compChoice == SCISSORS)
        {
            cout << "\tYou picked: Scissors \n";
            cout << "\tThe computer picked: Scissors \n";
            cout << "\tTIE! Not Again.\n";
        }
    }
}

//MMMMAAAAAIN!!!!!!dontloseit.
int main() {
    system("clear");
    int selection;
    int compSelect;
    char again;

    cout << "\t===================================" << endl;
    cout << "\t|      Rock, Paper, Scissors      |" << endl;
    cout << "\t===================================" << endl;
    cout << "" << endl;
    do{
        selection = getUserChoice();
        compSelect = getComputerChoice();
        determineWinner(selection, compSelect);
        if(selection==4){
            return 0;
        }
        cout << "" << endl;
        cout << "\tDo you want to play again? (Y/N): ";
        cin >> again;
        cout << "" << endl;
    }
    while (again == 'Y' || again == 'y');
    return 0;
}
