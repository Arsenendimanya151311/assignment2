#include <iostream>
using namespace std;

int main() {
    int days_late;
    char book_type;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> days_late;

    cout << "Enter the type of book (R for regular, I for IT, or N for reference): ";
    cin >> book_type;

    if (book_type == 'R' || book_type == 'r') {
        if (days_late <= 7) {
            fine = days_late * 10;
        } else {
            fine = 3.5 + (days_late - 7) * 1.0;
        }
    } else if (book_type == 'I' || book_type == 'i') {
        if (days_late <= 14) {
            fine = days_late * 25;
        } else {
            fine = 3.5 + (days_late - 14) * 75;
        }
    } else if (book_type == 'N' || book_type == 'n') {
        fine = days_late * 100;
    } else {
        cout << "Invalid book type. Please enter R, I, or N." << endl;
        return 1;
    }

    cout << "The late fee is: ksh" << fine << endl;

    return 0;
}
