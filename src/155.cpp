#include <iostream>
using namespace std;

int main() {
    int age = 18;
    cout << "You are " << (age >= 14) ? "teenager" : (age >= 16) ? "young adult" : "adult";
    return 0;
}
