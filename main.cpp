//
// Created by aaron on 3/28/2019.
//

// ECGR Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void drawScreen(char color) {
    switch (color) {
        case 'G':
            cout << "+-----------+-----------+" << endl;
            cout << "|   _____   |           |" << endl;
            cout << "|  / ____|  |           |" << endl;
            cout << "| | |  __   |           |" << endl;
            cout << "| | | |_ |  |           |" << endl;
            cout << "| | |__| |  |           |" << endl;
            cout << "|  \\_____|  |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        case 'R':
            cout << "+-----------+-----------+" << endl;
            cout << "|           |   _____   |" << endl;
            cout << "|           |  |  __ \\  |" << endl;
            cout << "|           |  | |__) | |" << endl;
            cout << "|           |  |  _  /  |" << endl;
            cout << "|           |  | | \\ \\  |" << endl;
            cout << "|           |  |_|  \\_\\ |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        case 'Y':
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "| __     __ |           |" << endl;
            cout << "| \\ \\   / / |           |" << endl;
            cout << "|  \\ \\_/ /  |           |" << endl;
            cout << "|   \\   /   |           |" << endl;
            cout << "|    | |    |           |" << endl;
            cout << "|    |_|    |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        case 'B':
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "|           |   ____    |" << endl;
            cout << "|           |  |  _ \\   |" << endl;
            cout << "|           |  | |_) |  |" << endl;
            cout << "|           |  |  _ <   |" << endl;
            cout << "|           |  | |_) |  |" << endl;
            cout << "|           |  |____/   |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        case 'C':
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        case 'F':
            cout << "+-----------+-----------+" << endl;
            cout << "|   _____   |   _____   |" << endl;
            cout << "|  / ____|  |  |  __ \\  |" << endl;
            cout << "| | |  __   |  | |__) | |" << endl;
            cout << "| | | |_ |  |  |  _  /  |" << endl;
            cout << "| | |__| |  |  | | \\ \\  |" << endl;
            cout << "|  \\_____|  |  |_|  \\_\\ |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            cout << "| __     __ |   ____    |" << endl;
            cout << "| \\ \\   / / |  |  _ \\   |" << endl;
            cout << "|  \\ \\_/ /  |  | |_) |  |" << endl;
            cout << "|   \\   /   |  |  _ <   |" << endl;
            cout << "|    | |    |  | |_) |  |" << endl;
            cout << "|    |_|    |  |____/   |" << endl;
            cout << "|           |           |" << endl;
            cout << "+-----------+-----------+" << endl;
            break;
        default:
            cout << "ERROR: Unknown Color: " << color << endl;
    }
}

void drawSequence(const string& simonSequence, int difficulty) {
    for (char color : simonSequence) {
        drawScreen(color);
        usleep(difficulty);
        system("tput clear");
        drawScreen('C');
        system("tput clear");
    }
}

void mainMenu() {
    cout << "+----------------------+" << endl;
    cout << "|    = Simon Game =    |" << endl;
    cout << "|                      |" << endl;
    cout << "| By The Ghost Den     |" << endl;
    cout << "|  Aaron Harabedian    |" << endl;
    cout << "|  Omar Altoum         |" << endl;
    cout << "|  Siddharth Beduduri  |" << endl;
    cout << "|  Austin Stanfield    |" << endl;
    cout << "+----------------------+" << endl;
    cout << endl;
    cout << "This is a guessing game. There are four \"lights\" that will flash" << endl;
    cout << "in a random sequence. Your job is to guess the sequence." << endl;
    cout << endl;
    cout << "Enter the sequence as a string of capital letters." << endl;
}

int getDifficulty() {
    char difficulty;
    cout << "Chose your difficulty." << endl;
    cout << "   E for Easy" << endl;
    cout << "   M for Medium" << endl;
    cout << "   H for Hard" << endl;
    cin >> difficulty;

    switch(difficulty) {
        case 'E':
            cout << "Easy mode selected." << endl;
            return 1000000;
        case 'M':
            cout << "Medium mode selected." << endl;
            return 500000;
        case 'H':
            cout << "Hard mode selected." << endl;
            return 250000;
        default:
            cout << "Somehow you managed to fail this task. Hopefully easy mode is easy enough for you." << endl;
            return 1000000;
    }
}

char generateRandomColor() {
    int number = rand() % 4;
    switch(number) {
        case 0:
            return 'G';
        case 1:
            return 'R';
        case 2:
            return 'Y';
        case 3:
            return 'B';
        default:
            cout << "ERROR: Unexpected color-number: " << number << endl;
    }
}

void generateSimonSequence(string &simonSequence, int numberOfColors) {
    simonSequence = "";
    for (int i = 0; i < numberOfColors; ++i) {
        simonSequence += generateRandomColor();
    }
}

string getGuessString() {
    string guess;
    cout << "Enter the sequence: ";
    cin >> guess;
    return guess;
}

bool isGuessCorrect(const string& simonSequence, const string& guessSequence) {
    return simonSequence == guessSequence;
}


int main()
{
    int difficulty = 0;
    int score = 0;
    int round = 0;
    bool keepGuessing = true;
    string guessSequence;
    string simonSequence;
    mainMenu();
    difficulty = getDifficulty();


    while(keepGuessing) {
        score += round;
        round += 1;

        generateSimonSequence(simonSequence, round);
        drawSequence(simonSequence, difficulty);
        guessSequence = getGuessString();

        keepGuessing = isGuessCorrect(simonSequence, guessSequence);
    }

    cout << endl << endl << "You lost!" << endl;
    cout << "    Score: " << score << endl;
    cout << "    Rounds: " << round - 1 << endl;

    return 0;
}