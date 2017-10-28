// gcd.cpp: Ethan Rogers
// Description: A program that implements the Euclidean
// algorithm to find the greatest common divisor of two
// integers.

#include <iostream>
using namespace std;

int main() {
  int a = 300000000;
  int b = 9;
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }
  cout << a;
  return 0;
}