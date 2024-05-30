#include <iostream>

using namespace std;

int main() {
  int limit = 0;
  int sum = 0;

  cin >> limit;

  for (int i = 0; i < limit; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      cout << i << endl;
      sum += i;
    }
  }

  cout << "sum is " << sum << endl;
}
