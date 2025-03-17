
// C++ program to check if a number is prime

#include <iostream>
using namespace std;

bool isPrime(int n) {
    // Corner case
    if (n <= 1) {
        return false;
    }

    // Iterate from 2 to n-1
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// Driver code
int main() {
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}