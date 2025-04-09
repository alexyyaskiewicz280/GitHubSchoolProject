#include <iostream>
using namespace std;

int main() {
    int height = 1;
    while(height <= 3) {
        cout << "Please enter a number between 0 and " << height << ": ";
        cin >> height;
        
        if (height == 0) {
            break; // Exit the loop if the user enters '0'
        }
    }

    return 0;
}
