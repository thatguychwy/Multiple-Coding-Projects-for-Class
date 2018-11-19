/*Homework 21
 Program Name: Exam Grader v0.1
 Purpose: Its a program to grade exams.
 Author: Craig Arceneaux
 Copyright © 2018 Personal. All rights reserved.
 Development: 17 NOV 2018*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const char * corFileName = "CorrectAnswers.txt";
    const char * studFileName = "StudentAnswers.txt";
    const int EXAMSIZE = 20;
    int count;
    char correctAnswers[EXAMSIZE];
    char studentAnswers[EXAMSIZE];
    int studentNumber = 0;
    ifstream infileC;

    // Open/Read correct answers.
    infileC.open(corFileName);
    if ( !infileC )
    {
        cout << "Error opening correct answers file." << endl;
        return 1;
    }
    for ( int i = 0; i < EXAMSIZE; i++ )
    {
        infileC >> correctAnswers[i];
        infileC.ignore( 256, '\n' );
    }
    infileC.close();

    //Open Student Answers.
    ifstream infileS;
    infileS.open(studFileName);
    if ( !infileS )
    {
        cout << "Error opening student answers file" << endl;
        return 1;
    }

    //Check Answer with correct answers.
    while ( infileS )
    {
        studentNumber++;

        // Read answers.
        for ( int i = 0; i < EXAMSIZE; i++ )
        {
            infileS >> studentAnswers[i];
            if ( !infileS ) return 0;
            infileS.ignore( 256, '\n' );
        }

        // Produce report.
        cout << "Report for Student " << studentNumber << ": "  << endl;
        cout << "The student got the following answers wrong: " << endl;
        count = 0;
        for ( int i = 0; i < EXAMSIZE; i++)
        {
            if ( correctAnswers[i] != studentAnswers[i] )
            {
                count++;
                cout << "Question number: " << setw( 2 ) << i + 1
                << "   Student answer: " << studentAnswers[i]
                << "   Correct answer: " << correctAnswers[i] << endl;
            }
        }
        cout << endl;

        double percent = 100.0 * ( EXAMSIZE - count ) / EXAMSIZE;
        cout << "Number of questions wrong: " << count   << endl;
        cout << "Percentage correct:        " << percent << endl;
        cout << endl;

        if ( percent >= 70.0 ) cout << "This student passed the exam" << endl;
        else                   cout << "This student failed the exam" << endl;

        cout << endl << endl;
    }

    infileS.close();
}
