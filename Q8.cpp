#include <iostream>
using namespace std;

int main() {
    double purchase_amount;
    double discount_rate = 0.0;
    double total_cost;

    cout << "Enter the purchase amount: ";
    cin >> purchase_amount;

    if (purchase_amount < 50) {
        discount_rate = 0.0;
    } else if (purchase_amount < 100) {
        discount_rate = 0.05; // 5% discount for purchases between 50 and 100
    } else if (purchase_amount < 200) {
        discount_rate = 0.1;  // 10% discount for purchases between 100 and 200
    } else {
        discount_rate = 0.15; // 15% discount for purchases over 200
    }

    total_cost = purchase_amount * (1 - discount_rate);

    cout << "Total cost after applying discount: $" << total_cost << endl;

    return 0;
}
