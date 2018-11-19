/*Homework 17
Program Name: Math Tutor Parte Trols v0.1
Purpose: This program helps tutor students in math.
(Addition , Subtraction , Multiplication, Division)
Author: Craig Arceneaux
Copyright © 2018 Personal. All rights reserved.
Development: 20-31 OCT 2018*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <string>
#include <sstream>
#include <stdlib.h>

using namespace std;


int main() {
  system("clear");
start:
/*VARIABLES*/
    bool
        isMain = true,
        isAddition = false,
        isSubstraction = false,
        isMultiplication = false,
        isDivision = false;
    const int
        AS_MIN = 50,
        AS_MAX = 500,
        MD_A = 1,
        MP_B = 100,
        MD_C = 9;
    int answer;
    char choice;
    char key_press[1];

/*MAIN LOOP*/
    while (1) {
        if(isMain){
            cout << "\tWelcome to Math Tutor!" << endl;
            cout << "\tThis program is to help students study math problems." << endl;
            cout << "\tPlease select an option from the menu below." << endl;
            cout << "\t------------------------" << endl;
            cout << "\t 1 - Addition problems" << endl;
            cout << "\t 2 - Subtraction problems" << endl;
            cout << "\t 3 - Multiplication problems" << endl;
            cout << "\t 4 - Division problems" << endl;
            cout << "\t------------------------" << endl;
            cout << "\t 5 - Exit Application" << endl;

            cout << "\tEnter your choice (1-5): ";

            cin>>choice;

/*MENU SELECTION*/
            switch (choice) {
/*ADDITION*/
                case '1':{
                    cout << "\nYou have selected Addition. Enter 1 again to confirm this entry:" <<endl;
                    cin >> key_press;
                    while(key_press != string("1"))
                    {
                        cout << "\nSelection Failed. Reloading Program." <<endl;
                        system("clear");
                        goto start;
                    };
                    cout << "Addition Selected.\n" <<endl;
                    system("clear");
                    isAddition = true;
                    do{
                        int x = (rand() % (AS_MAX - AS_MIN + 1)) + AS_MIN;
                        int y = (rand() % (AS_MAX - AS_MIN + 1)) + AS_MIN;
                        int c = (x+y);

                        cout << "\n Addition Problem. Enter 0 to escape back to main menu." <<endl<< endl << endl;

                        cout << "   " << x << endl;
                        cout << "+  " << y << endl;
                        cout << "_____" << endl << endl;

                        cout << "ANSWER: " ;
                        cin>>answer;

                        if(answer == 0 && answer != c){
                            isAddition = false;
                            system("clear");
                            goto start;
                        }
                        while(answer != c){

                            cout << "Wrong Try Again." << endl;
                            cout << "ANSWER: " ;
                            cin >> answer;
                            cout << "" <<endl;
                        }
                        cout << "The Answer is " << (x+y) << endl<< endl;
                        cout << "Congradulations! You got the answer correct." << endl << endl << endl;
                    }
                    while(isAddition==true);
                    }
                    break;
/*SUBTRACTION*/
                case '2':{
                    cout << "\nYou have selected Subtraction. Enter 2 again to confirm this entry:" <<endl;
                    cin >> key_press;
                    while(key_press != string("2"))
                    {
                        cout << "\nSelection Failed. Reloading Program." <<endl;
                        system("clear");
                        goto start;
                    };
                    cout << "Subtraction Selected.\n" <<endl;
                    system("clear");
                    isSubstraction = true;
                    do{
                        int x = (rand() % (AS_MAX - AS_MIN + 1)) + AS_MIN;
                        int y = (rand() % (AS_MAX - AS_MIN + 1)) + AS_MIN;
                        int c = (x-y);

                        cout << "\n Subtraction Problem. Enter 0 to espape back to main menu." <<endl<< endl << endl;

                        cout << "   " << x << endl;
                        cout << "-  " << y << endl;
                        cout << "_____" << endl << endl;

                        cout << "ANSWER: " ;
                        cin>>answer;

                        if(answer == 0 && answer != c){
                            isSubstraction = false;
                            system("clear");
                            goto start;
                        }
                        while(answer != c){
                            cout << "Wrong, Try Again." << endl;
                            cout << "ANSWER: " ;
                            cin >> answer;
                            cout << "" <<endl;
                        }
                        cout << "The Answer is " << (x+y) << endl<< endl;
                        cout << "Congradulations! You got the answer correct." << endl << endl << endl;
                    }
                    while(isSubstraction==true);
                }
                    break;
/*MULTIPLICATION*/
                case '3':{
                    cout << "\nYou have selected Multiplication. Enter 3 again to confirm this entry:" <<endl;
                    cin >> key_press;
                    while(key_press != string("3"))
                    {
                        cout << "\nSelection Failed. Reloading Program." <<endl;
                        system("clear");
                        goto start;
                    };
                    cout << "Multiplication Selected.\n" <<endl;
                    system("clear");
                    isMultiplication = true;
                    do{
                        int x = (rand() % (MP_B - MD_A + 1)) + MD_A;
                        int y = (rand() % (MD_C - MD_A + 1)) + MD_A;
                        int c = x * y;

                        cout << "\n Multiplication Problem. Enter 0 to escape back to main menu." <<endl<< endl << endl;

                        cout << "   " << x << endl;
                        cout << "*  " << y << endl;
                        cout << "_____" << endl << endl;

                        cout << "ANSWER: " ;
                        cin>>answer;

                        if(answer == 0 && answer != c){
                            isMultiplication = false;
                            system("clear");
                            goto start;
                        }
                          while(answer != c){

                            cout << "Wrong Try Again." << endl;
                            cout << "ANSWER: " ;
                            cin >> answer;
                            cout << "" <<endl;
                          }
                          cout << "The Answer is " << (x+y) << endl<< endl;
                          cout << "Congradulations! You got the answer correct." << endl << endl << endl;
                      }
                      while(isMultiplication==true);
                  }
                    break;
/*DIVISION*/
                case '4':{
                    cout << "\nYou have selected Division. Enter 4 again to confirm this entry:" <<endl;
                    cin >> key_press;
                    while(key_press != string("4"))
                    {
                        cout << "\nSelection Failed. Reloading Program." <<endl;
                        system("clear");
                        goto start;
                    };
                    cout << "Division Selected.\n" <<endl;
                    system("clear");
                    isDivision = true;
                    do{

                        int i;
                        int d = (rand() % (MD_C - MD_A + 1));
                        int b = (rand() % (MD_C - MD_A + 1));
                        int n;
                        for(i=1; i<=b; i++){
                          n = i*d;
                        }
                        int c = n / d;


                        cout << "\n Division Problem. Enter 0 to escape back to main menu." <<endl<< endl << endl;

                        cout << "   " << n << endl;
                        cout << "÷  " << d << endl;
                        cout << "_____" << endl << endl;

                        cout << "ANSWER: " ;
                        cin>>answer;

                        if(answer == 0 && answer != c){
                            isDivision = false;
                            system("clear");
                            goto start;
                          }
                          while(answer != c){

                            cout << "Wrong Try Again." << endl;
                            cout << "ANSWER: " ;
                            cin >> answer;
                            cout << "" <<endl;
                          }
                          cout << "The Answer is " << (c) << endl<< endl;
                          cout << "Congradulations! You got the answer correct." << endl << endl << endl;
                        }
                        while(isDivision==true);
                      }
                    break;
/*CLOSE PROGRAM*/
                case '5':{
                    cout << "\nThanks for using Math Tutor." <<endl;
                    exit(0);
                }
                    break;
                default:
                    break;
            }
        }else{
            return 0;
        }
    };
    return 0;
}
