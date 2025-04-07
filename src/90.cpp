#include <iostream>
using namespace std;

int main() {
    int n = 5; // Example value for n
    int maxSum = 0;
    int currentMaxSum = 0;
    
    for (int i = 1; i <= n; ++i) {
        int number = rand() % 20 + 1; // Random number between 1 and 20
        if (number > maxSum) {
            maxSum = number;
            currentMaxSum = number;
        }
    }
    
    cout << "The maximum sum is: " << currentMaxSum << endl;
    return 0;
}
