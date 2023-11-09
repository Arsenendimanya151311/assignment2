#include <iostream>
using namespace std;

int main() {
    int age, months_as_customer;
    double bank_balance;
    char crb_status;

    // Capture customer details
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your bank balance: ";
    cin >> bank_balance;

    cout << "Enter your CRB status (G for good, B for bad): ";
    cin >> crb_status;

    cout << "Enter the number of months you've been a customer: ";
    cin >> months_as_customer;

    // Check loan eligibility based on conditions
    if (age > 22 && bank_balance > 50000 && crb_status == 'G' && months_as_customer > 6) {
        cout << "Congratulations! You are qualified for a loan." << endl;
    } else {
        cout << "Sorry, you do not meet the eligibility criteria for a loan." << endl;
    }

    return 0;
}
