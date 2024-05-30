#include <iostream>

using namespace std;

int is_prime(unsigned int const n) {
  if (n == 1) {
    return 0;
  } else if (n % 2 == 0 || n % 3 == 0) {
    return 0;
  } else {
    for (int i = 5; i * i <= n; i++) {
      if (n % i == 0) return 0;
    }
  }
  return 1;
}

int main() {
  unsigned int n;
  cin >> n;
  vector<int> m(1000, -1);

  for (int i = 2; i < n; i++) {
    if (m[i] == -1) m[i] = is_prime(i);
    if (m[i+6] == -1) m[i+6] = is_prime(i+6);
    if (m[i] && m[i+6]) {
      cout << "(" << i << ", " << i+6 << ")" << endl;
    }
  }
}
