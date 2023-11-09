#include <iostream>

using namespace std;

int main() {
  // Initialize ticket prices
  const double regularAdultPrice = 1200;
  const double regularChildPrice = 800;
  const double threeDAdultPrice = 1500;
  const double threeDChildPrice = 1000;

  // Prompt user to enter customer's age
  int age;
  cout << "Enter customer's age: ";
  cin >> age;

  // Prompt user to select movie type
  char movieType;
  cout << "Select movie type (R for Regular, 3 for 3D): ";
  cin >> movieType;

  // Determine ticket price based on age and movie type
  double ticketPrice;
  if (movieType == 'R') {
    if (age >= 13) {
      ticketPrice = regularAdultPrice;
    } else {
      ticketPrice = regularChildPrice;
    }
  } else if (movieType == '3') {
    if (age >= 13) {
      ticketPrice = threeDAdultPrice;
    } else {
      ticketPrice = threeDChildPrice;
    }
  } else {
    cout << "Invalid movie type. Please enter R or 3." << endl;
    return 1;
  }

  // Display ticket price
  cout << "Ticket price: ksh" << ticketPrice << endl;

  return 0;
}
