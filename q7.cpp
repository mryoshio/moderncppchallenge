#include <iostream>
using namespace std;
const unsigned int UPPER_N = 1000000;

vector<int> m(UPPER_N, -1);

unsigned int sum_of_divisors(unsigned int n) {
  if (m[n] != -1) return m[n];

  unsigned int ret = 0;
  for (unsigned int i = 1; i*i < n; i++) {
    if (n%i != 0) continue;
    ret += i;
    if (i>1 && n/i != i) ret += n/i;
  }

  return ret;
}

int main() {
  for (int i = 2; i < UPPER_N; i++) {
    m[i] = sum_of_divisors(i);
    if (i != m[i] && m[m[i]] == i) {
      cout << "(" << m[i] << ", " << i << ")" << endl;
    }
  }
}

