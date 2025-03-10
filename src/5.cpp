
// This is a C++ program that generates a random number between 1 and 6
#include <iostream>
using namespace std;
int main() {
  int x = rand() % 6 + 1; // generate a random number between 1 and 6
  cout << "The generated number is: " << x << endl;
}