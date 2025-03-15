

// This program demonstrates how to use a vector container
// to store a sequence of integers in C++.

#include <iostream>
#include <vector>

int main() {
  // Create an empty vector to store the numbers
  std::vector<int> numbers;

  // Add some numbers to the vector
  numbers.push_back(5);
  numbers.push_back(10);
  numbers.push_back(15);

  // Loop through the vector and print each number
  for (auto number : numbers) {
    std::cout << number << "\n";
  }

  return 0;
}