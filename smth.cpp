#include <cstdlib>
#include <iostream>
#include <string>

int foo(int a, int b) { return 2 + 2; }

int main() {
  // std::cout << "2";
  std::cout << "Type a number: "; // Type a number
  int x, y;
  std::cin >> x; // Get input
  std::cout << "Your number is: "
            << "\n"
            << x;
  std::cout << "\n"
            << "Type a number 1: "; // Type a number 1
  std::cin >> y;                    // Get input 1
  std::cout << "Your number is: "
            << "\n"
            << y;
  int sum = x + y;
  std::cout << "\n"
            << "The sum is: "
            << "\n"
            << sum;
  time_t current_time = time(NULL);
  srand((unsigned) time(NULL));
  int random = 1 + (rand() % 30); // Random number
  std::cout << "\n"
            << "Random number is: "
            << "\n"
            << random;
  if (x > random) {
    std::cout << "\n "
              << "x is greater then random";
  } else if (x < random) {
    std::cout << "\n "
              << "x is less than random";
  } else {
    std::cout << "\n "
              << "x is equal to random";
  }
}
