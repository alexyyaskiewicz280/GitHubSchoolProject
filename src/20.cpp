#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << n * 2 + 1;
    } else {
        cout << n * 2 - 1;
    }
    
    return 0;
}
