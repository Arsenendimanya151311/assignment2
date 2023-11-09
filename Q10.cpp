#include <iostream>

using namespace std;

int main() {
  // Initialize account balance and daily withdrawal limit
  double accountBalance = 10000;
  const double dailyWithdrawalLimit = 5000;

  // Prompt user to enter their account number and pin
  int accountNumber;
  int pin;

  cout << "Enter your account number: ";
  cin >> accountNumber;

  cout << "Enter your PIN: ";
  cin >> pin;

  // Verify account number and pin
  if (accountNumber == 151311 && pin == 0000) {
    // Prompt user to enter withdrawal amount
    double withdrawalAmount;
    cout << "Enter the amount you wish to withdraw: ";
    cin >> withdrawalAmount;

    // Check if withdrawal amount exceeds account balance
    if (withdrawalAmount > accountBalance) {
      cout << "Insufficient funds. Please enter a lower amount." << endl;
    } else {
      // Check if withdrawal amount exceeds daily limit
      if (withdrawalAmount > dailyWithdrawalLimit) {
        cout << "Exceeds daily withdrawal limit of " << dailyWithdrawalLimit << ". Please enter a lower amount." << endl;
      } else {
        // Process withdrawal and update account balance
        accountBalance -= withdrawalAmount;
        cout << "Withdrawal successful. Your new account balance is: " << accountBalance << endl;
      }
    }
  } else {
    cout << "Invalid account number or PIN. Please try again." << endl;
  }

  return 0;
}
