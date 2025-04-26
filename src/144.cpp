#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer value: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n * 2 - 1 << endl;
    } else {
        cout << n * 2 + 1 << endl;
    }

    return 0;
}
