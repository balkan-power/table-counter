#include <iostream>
using namespace std;

int main() {
  int tableNum;
  int tableLimit;
  cout << "What number would you like tables of?\n";
  cin >> tableNum;
  cout << "To how high should the table go?\n";
  cin >> tableLimit;
  cout << "\n";

  for (int i = 1; i <= tableLimit; i++) {
    int tableResult = i * tableNum;
    cout << i << " * " << tableNum << " = " << tableResult << "\n";
  }
  
  cin.ignore(); // ignore leftover newline input buffer,
  // or else it will not stop but continue and exit out of .exe file
  cout << "\nPress Enter to exit...";
  cin.get();

  return 0;
}
