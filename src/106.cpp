#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are old enough to attend high school." << endl;
    } else {
        cout << "Sorry, you need to be at least 18 years old to attend high school." << endl;
    }
    
    return 0;
}
