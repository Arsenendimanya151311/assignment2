#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int light = 0;

    while (true) {
        switch (light) {
            case 0:
                cout << "Red light" << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Simulating red light duration
                light = 1;
                break;
            case 1:
                cout << "Yellow light" << endl;
                this_thread::sleep_for(chrono::seconds(2)); // Simulating yellow light duration
                light = 2;
                break;
            case 2:
                cout << "Green light" << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Simulating green light duration
                light = 0;
                break;
        }
    }

    return 0;
}
