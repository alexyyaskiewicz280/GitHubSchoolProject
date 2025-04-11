#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    if (height > 0) {
        double area = (height * height) / 2;
        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid input. Please enter a non-negative integer." << endl;
    }

    return 0;
}
