#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            cout << " * ";
        }
        cout << endl;
    } else {
        cout << "The input is not a positive integer." << endl;
    }

    return 0;
}
