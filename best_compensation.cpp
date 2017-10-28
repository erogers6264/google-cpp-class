// best_compensation.cpp, Ethan Rogers
// Given a choice of 3 methods of compensation,
// compute the best option

#include <iostream>
using namespace std;

int GetInput() {
  int pairs = 0;
  cout << "How many pairs of shoes did you sell this week? " << endl;
    cout << "You entered a non-numeric. Assuming you didn't sell any..." << endl;
    return 0;
  }
  // Shoes are about $225 per pair
  return (pairs * 225);
}

// Straight salary of $600 per week;
int CalcMethod1() {
  int compensation = 600;
  return compensation;
}

// Salary of $7.00 per hour plus a 10% comission on sales;
int CalcMethod2(int WeeklySales) {
  int compensation = 0;
  compensation = WeeklySales * 0.1;
  compensation += 7 * 40;
  return compensation;
}

// No salary, but 20% comissions and $20 for each pair sold;
int CalcMethod3(int WeeklySales) {
  int compensation = 0;
  compensation = WeeklySales * 0.2;
  compensation += (WeeklySales / 225) * 20;
  return compensation;
}

int main() {
  int WeeklySales = GetInput();
  cout << "You sold " << (WeeklySales / 225) << " pairs of shoes for a total of $" << WeeklySales << " in weekly sales." << endl;
  cout << "With the first method, you'd earn $" << CalcMethod1() << endl;
  cout << "With the second method, you'd earn $" << CalcMethod2(WeeklySales) << endl;
  cout << "With the third method, you'd earn $" << CalcMethod3(WeeklySales) << endl;
  return 0;
}
