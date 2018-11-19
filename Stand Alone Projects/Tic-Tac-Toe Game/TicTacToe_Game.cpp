/*Homework 23
 Program Name: Tic-Tac-Toe Game v0.1
 Purpose: Its a game, you play and hopfully have fun with.
 Author: Craig Arceneaux
 Copyright © 2018 Personal. All rights reserved.
 Development: 18 NOV 2018*/

#include <iostream>

const int SIZE = 3;
using namespace std;

void displayBoard(char arr[][SIZE]){
    cout << "\tColumns:" << endl;
    cout << "\t1  2  3" << endl;
    for (int i = 0; i < SIZE; i++){
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < SIZE; j++){
            cout << " " << arr[i][j] << ' ';
        }
        cout << endl << endl;
    }
}

bool checkForWinner(char arr[][SIZE], char ch){
    int count;
    for (int i = 0; i < SIZE; i++){
        count = 0;
        for (int j = 0; j < SIZE; j++){
            if (arr[i][j] == ch)
                count++;
        }
        if (count == SIZE)
            return true;
    }
    for (int i = 0; i < SIZE; i++){
        count = 0;
        for (int j = 0; j < SIZE; j++){
            if (arr[j][i] == ch)
                count++;
        }
        if (count == SIZE)
            return true;
    }
    count = 0;
    for (int i = 0; i < SIZE; i++){
        if (arr[i][i] == ch)
            count++;
    }
    if (count == SIZE)
        return true;
    count = 0;
    for (int i = 0, j = SIZE - 1; i < SIZE; i++, j--){
        if (arr[i][j] == ch)
            count++;
    }
    if (count == SIZE)
        return true;
    return false;
}

bool isBoardFull(char arr[][SIZE]){
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            if (arr[i][j] == '-')
                return false;
        }
    }
    return true;
}

int main(){
    char board[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            board[i][j] = '-';
        }
    }
    bool isGameEnd = false;
    int row, col, playerTurn = 1;
    char player;
    cout << "Tic-Tac-Toe Game!" << endl;
    cout << "Player vs Player!" << endl <<endl;
    while (!isGameEnd){
        displayBoard(board);
        if (playerTurn == 1){
            player = 'X';
            playerTurn = 2;
        }
        else if (playerTurn == 2){
            player = 'O';
            playerTurn = 1;
        }
        do{
            cout << "Player " << player << "'s" << " Turn" << endl;
            cout << "Enter Row: "; cin >> row;
            while(row > 3 || row < 1){
              cout << "Input not accepted try again." << endl;
              cout << "Enter Row: "; cin >> row;
            }
            cout << "Enter Col: "; cin >> col;
            while(col > 3 || col < 1){
              cout << "Input not accepted try again." << endl;
              cout << "Enter Col: "; cin >> col;
            }
            row--;
            col--;
            cout << "" << endl;
        } while (!(row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '-'));
        board[row][col] = player;
        if (checkForWinner(board, player)){
            displayBoard(board);
            cout << "Player " << player << " Wins" << endl;
            isGameEnd = true;
        }
        else if (isBoardFull(board)){
            displayBoard(board);
            cout << "Game Draw" << endl;
            isGameEnd = true;
        }
    }
    return (0);
}
