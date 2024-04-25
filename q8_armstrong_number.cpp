#include <iostream>

using namespace std;

bool is_armstrong(const int n) {
  int d3 = int(n/100);
  int d2 = int((n - d3 * 100) * 0.1);
  int d1 = n - d3 * 100 - d2 * 10;
  return n == pow(d3, 3) + pow(d2, 3) + pow(d1, 3);
}

int main() {
  for (int i = 100; i < 1000; i++) {
    if (is_armstrong(i)) cout << i << endl;
  }
}
