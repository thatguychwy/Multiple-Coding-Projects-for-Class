/*Homework 18
 Program Name: Temperature Converter v0.1
 Purpose: This program coverts Temperatures.
 Author: Craig Arceneaux
 Copyright © 2018 Personal. All rights reserved.
 Development: 7 NOV 2018*/

#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
#include <ctime>

using namespace std;

bool fer;
double fahrenheit;
double celsius;

int tempConvert(double temp){
    if(fer){
        fahrenheit = ((temp*9.0/5.0)+32.0);
        return(fahrenheit);
    }else{
        celsius = ((5.0/9.0)*(temp - 32.0));
        return(celsius);
    }
}

int main() {
    system("clear");
    char selection;
    double startingTemp;
    double endingTemp;

    while(1){
        cout << "\tWelcome to Temperature Converter!" << endl;
        cout << "\tEnter c (or C) to convert Fahrenheit to Celsius" << endl;
        cout << "\t or enter f (or F) to convert Celsius to Fahrenheit"<< endl << endl ;
        cout << "\tEnter your selection:";
        cin>>selection;
        cout << "" << endl;

        switch (selection) {
            case 'c':
            case 'C':{
                fer = false;
                cout << "\tEnter the starting temperature: ";
                cin>>startingTemp;
                cout << "\tEnter the ending temperature: ";
                cin>>endingTemp;
                cout << "" << endl;
                cout << "\tCelsius  |  Fahrenheit" << endl;
                for(double currentTemp=startingTemp; currentTemp <= endingTemp; currentTemp++){
                    tempConvert(currentTemp);
                    cout << "\t";
                    cout << fixed << setprecision(1)
                    << celsius << "    |   " << currentTemp << endl;
                }
                cout << "" << endl;
            }
                break;
            case 'f':
            case 'F':{
                fer = true;
                cout << "\tEnter the starting temperature: ";
                cin>>startingTemp;
                cout << "\tEnter the ending temperature: ";
                cin>>endingTemp;
                cout << "" << endl;
                cout << "\tFahrenheit  |  Celsius" << endl;
                for(double currentTemp=startingTemp; currentTemp <= endingTemp; currentTemp++){
                    tempConvert(currentTemp);
                    cout << "\t     ";
                    cout << fixed << setprecision(1)
                    << fahrenheit << "   |   " << currentTemp << endl;
                }
                cout << "" << endl;
            }
                break;
            default:
                cout<<"\n Invalid Menu Selection.... Lets try this again. \n \n";
                break;
        }

    }
    return 0;
}
