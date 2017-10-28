// animal.cpp: Ethan Rogers
// Description: Calculate how many horses, pigs,
// and rabbits a farmer bought if he bought 100
// animals for $100 and Horses cost $10, pigs $3,
// and rabbits

#include <iostream>
using namespace std;

int main() {
  
  for (int h = 0; h < 10000; h++) {
    for (int p = 0; p < 10000; p++) {
      for (int r = 0; r < 10000; r++) {
        if ((h + p + r) == 10000) {
          if (((10 * h) + (3 * p) + (0.5 * r)) == 10000) {
            cout << "Found one! " << h << " horses " << p << " pigs " << r << " rabbits " << endl;
          }
        }
      }
    }
  }
  
  
  return 0;
}