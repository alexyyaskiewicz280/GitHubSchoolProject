#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            cout << i * i << " ";
        }
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
    return 0;
}
