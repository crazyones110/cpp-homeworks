#include <iostream>
#include <random>

using std::cout;
using std::endl;
using std::cin;

int main() {
  cout << "Welcome to the GUESSING GAME!" << endl
  << "I will generate a number and you will guess it!" << endl;
  int min{}, max{};
  cout << "Please provide the smallest number: " << endl;
  cin >> min;
  cout << "Please provide the largest number: " << endl;
  cin >> max;

  std::random_device random_device;
  std::mt19937 random_engine{random_device()};
  std::uniform_real_distribution distribution{min, max};
  auto random_number = distribution(random_engine);
  cout << "I've generated a number. Try to guess it!" << endl;

  auto count = 1u;
  while (true) {
    cout << "Please provide the next guess: ";
    int guess{};
    cin >> guess;
    if (guess == random_number) {
      cout << "You've done it! You guessed the number " << random_number << " in " << count
      << " guesses!" << endl;
      return 0;
    } else if (guess < random_number) {
      cout << "Your number is too small. Try again!" << endl;
    } else {
      cout << "Your number is too big. Try again!" << endl;
    }
  }
  return 0;
}