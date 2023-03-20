#include <iostream>
#include <vector> 
#include <string>
#include <algorithm>
#include <fstream> 
#include <istream>
#include <stdio.h>

using namespace std;

//Word Grabber
ifstream Wordfile;
    string pickedword(int rand){
    string randomword;
    Wordfile.open("words.txt");
    for (int i = 0; i <= rand; i++){
        getline(Wordfile, randomword);
    }
    Wordfile.close();
    return randomword;
}
//Word Grabber End

int main(int argc, char* argv[]) {
    int menuchoices;
    const int Numberoftries = 6; 
    const int Wordlength = 5;
    int Currenttry = 0;
    string Guess = "";

    while(true) {
    cout << "=========================" << endl;
    cout << "    WELCOME TO WORDLE    " << endl;
    cout << "=========================" << endl;
    cout << endl;
    cout << endl;
    cout << "1. Play Wordle" << endl;
    cout << "2. How to Play" << endl;
    cout << "3. Statistics Summary" << endl;
    cout << "4. Reset Statistics" << endl;
    cout << "5. Exit" << endl;
    cout << endl;
    cout << endl;
    cout << "Select an option:" << endl;
    //Need to include a program reader here 
    cin >> menuchoices;
    cout << endl;

    if(menuchoices == 1){
        //include wordle program here, 
    }
    else if (menuchoices == 2){
        cout << "=============================================" << endl;
        cout << "                 HOW TO PLAY                 " << endl;
        cout << "=============================================" << endl;
        cout << "Guess the Wordle in 6 tries.                 " << endl;
        cout << endl;
        cout << endl;
        cout << "HOW TO PLAY:                                 " << endl;
        cout << "- Each guess must be a valid 5 letter word.  " << endl;
        cout << "- The color of the tiles will change to show " << endl;
        cout << "  you how close your guess was to the word   " << endl;
        cout << endl;
        cout << endl;
        cout << "\033[32m" << "W" << "\033[0m" << " E A R Y" << endl;
        cout << "W is in the word and in the correct spot." << endl;
        cout << endl;
        cout << "P" << "\033[33m" << " I " << "\033[0m" << " L L S" << endl;
        cout << "I is in the word but it is in the wrong spot." << endl;
        cout << endl;
        cout << "V A G " << "\033[90m" << "U " << "\033[0m" << "E" << endl;
        cout << "U is not the word in any spot." << endl;
        cout << endl;
        cout << endl;
        cout << "Press [Any #] to continue" << endl;
        cin >> menuchoices;
        } else if (menuchoices == 3){
            cout << "==========================" << endl;
            cout << "    STATISTICS SUMMARY    " << endl;
            cout << "==========================" << endl;
            cout << "Times Played:             " << endl;
            cout << "Average Attempts:         " << endl;
            cout << "Win Percentage:           " << endl;
            cout << "Current Streak:           " << endl;
            cout << "Longest Streak:           " << endl;
            cout << endl;
            cout << endl;
            cout << "--------------------------" << endl;
            cout << "WORD     ATTEMPTS      WIN" << endl;
            cout << "--------------------------" << endl;
            cout << endl;
            cout << endl;
            cout << "Press [Any #] to go back" << endl;
            cin >> menuchoices;
        } else if (menuchoices == 4){
            cout << "Press [Any #] to go back" << endl;
            cin >> menuchoices;
        } else if (menuchoices == 5){
            break;
        } else{
            cout << "That is not a valid key." << endl;
            break;
        }

    }

    return 0;
}