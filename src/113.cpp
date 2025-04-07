#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n * 2 + 1 << endl;
    } else {
        cout << n * 3 + 5 << endl;
    }

    return 0;
}
