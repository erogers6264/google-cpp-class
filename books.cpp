// books.cpp: Ethan Rogers
// Description: A program to compute the number of ways
// you can arrange a given number of different books on
// a shelf.

#include <iostream>
using namespace std;

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n-1);
}

int main() {
  cout << factorial(15);
  return 0;
}