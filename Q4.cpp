#include <iostream>

using namespace std;

int main() {
  int num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  switch (num1 >= num2) {
    case true:
      cout << "The maximum number is: " << num1 << endl;
      break;
    case false:
      cout << "The maximum number is: " << num2 << endl;
      break;
  }

  return 0;
}
