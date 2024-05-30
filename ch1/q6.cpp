#include <iostream>

using namespace std;

bool is_abundant(unsigned int const n) {
  unsigned int sum = 0;
  for (unsigned int i = 1; i < n; i++) {
    if (n % i == 0) sum += i;
  }
  if (sum > n) {
    cout << n << " : " << sum - n << endl;
    return true;
  }
  return false;
}

int main() {
  unsigned int n;
  cin >> n;

  for (unsigned int i = 0; i <= n; i++) {
    is_abundant(i);
  }

  return 0;
}
