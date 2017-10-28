// file.cpp, Ethan Rogers
// Description: An illustration of file processing
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char first_name[30], last_name[30]; int age; char another;
  char file_name[20];

  // Collect the data.
  cout << endl << "Enter the name of the file: "; cin >> file_name;
  // Create an ofstream called People, open the stream for output.
  ofstream People(file_name, ios::out);
  do {
    cout << "Enter First Name: "; cin >> first_name;
    cout << "Enter Last Name: "; cin >> last_name;
    cout << "Enter Age: "; cin >> age;
    cout << "Another? (y/n): "; cin >> another;
    // Write the output to the stream.
    People << first_name << endl << last_name << endl << age << endl;
  } while (another == 'y' || another == 'Y');

  // Close the stream.
  People.close();

  // Open the file just created.
  ifstream PeopleIn(file_name);
  while (1) {
    // Read in the data
    PeopleIn >> first_name >> last_name >> age;
    // Break if end of file reached.
    if (PeopleIn.eof()) { break; }
    cout << endl << "First Name: " << first_name;
    cout << endl << "Last Name: " << last_name;
    cout << endl << "Age: " << age;
    cout << endl;
  }
  PeopleIn.close();
  return 0;
}
