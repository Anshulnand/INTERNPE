#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


string compmove() {
    int random = rand() % 3;
    if (random == 0) return "Paper";
    if (random == 1) return "Scissors";
    return "Rock";
}


string determinewinner(string computerchoice, string playerchoice) {
    if (computerchoice == playerchoice) return "?? It's a tie!";
    else if ((computerchoice == "Rock" && playerchoice == "Scissors") ||
             (computerchoice == "Paper" && playerchoice == "Rock") ||
             (computerchoice == "Scissors" && playerchoice == "Paper"))
        return "? Computer Wins!";
    else
        return "? Player Wins!";
}

int main() {
    srand(time(0)); 

    string computerchoice, playerchoice, result;


    cout << "====================================\n";
    cout << "     ROCK PAPER SCISSORS GAME       \n";
    cout << "====================================\n";
    cout << "Instructions:\n";
    cout << "? Type 'Rock', 'Paper', or 'Scissors' to play.\n";
    cout << "? Match against the computer and see who wins!\n";
    cout << "------------------------------------\n\n";

  
    cout << "?? Player, enter your choice: ";
    cin >> playerchoice;

   
    computerchoice = compmove();
    result = determinewinner(computerchoice, playerchoice);

   
    cout << "\n------------------------------------\n";
    cout << "?? Player's Choice: " << playerchoice << endl;
    cout << "?? Computer's Choice: " << computerchoice << endl;
    cout << "------------------------------------\n";
    cout << "?? Result: " << result << endl;
    cout << "====================================\n";

    return 0;
}
