// guessing_game.cpp: Ethan Rogers
// Description: A guessing game where the player guesses
// the secret number.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  int iSecret = 0;
  int iGuess = 0;
  
  // Initialize the random seed:
  srand(time(0));
  
  // Generate the secret number between 1 and 100
  iSecret = rand() % 100 + 1;

  do {
    cout << "Please guess a number between 1 and 100: ";
    if (!(cin >> iGuess)) {
      cout << "Non numeric characters are not allowed. Try again..." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    
    if (iGuess > iSecret) {
      cout << "Your guess was too high!" << endl;
    } else if (iGuess < iSecret && iGuess != 0){
      cout << "Your guess was too low!" << endl;
    }
  } while (iGuess != iSecret);
  cout << "You guessed correctly. The secret was " << iSecret << ".";
  return 0;
}
