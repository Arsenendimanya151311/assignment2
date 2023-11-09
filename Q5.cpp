#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * pow(radius, 2);
                cout << "The area of the circle is: " << area << endl;
                break;
            case 2:
                cout << "Enter the length and width of the rectangle: ";
                cin >> length >> width;
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;
            case 3:
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number from 1 to 4." << endl;
        }

        cout << endl;
    } while (choice != 4);

    return 0;
}
