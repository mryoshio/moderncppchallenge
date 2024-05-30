#include <iostream>

using namespace std;

bool is_prime(unsigned int const n) {
  if (n == 1) {
    return false;
  } else if (n % 2 == 0 || n % 3 == 0) {
    return false;
  } else {
    for (int i = 5; i * i <= n; i++) {
      if (n % i == 0) return false;
    }
  }
  return true;
}

int main() {
  unsigned int n;
  cin >> n;
  cout << is_prime(n) << endl;
}
