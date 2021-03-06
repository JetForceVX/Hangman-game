#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include <iostream>
#include <string>

using namespace std;

void welcomeHangman();
void gameContinue();
string gameStart();
string getWord();
char checkLetter(char letter, string alphabets);
string removeLetter(char letter, string alphabets);
int checkGuess(char letter, const char *fileWord, char *blankWord, int wordLength, int tries);
bool refreshDisplay(const char *blankWord, int wordLength, string alphabets, int guesses, int tries);
void drawHangman(int tries);
void gameOver(bool win, string word, int guesses, int tries);
void displayStats(string word, int guesses, int tries);
bool playAgain(bool gameRun);
bool gameQuit(bool gameRun);
#endif
