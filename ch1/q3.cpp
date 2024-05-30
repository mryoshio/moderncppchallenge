#include <iostream>

using namespace std;

unsigned int gcd(unsigned int a, unsigned int b) {
  return b == 0 ? a : gcd(b, a % b);
}

unsigned int lcm(unsigned int a, unsigned int b) {
  return a / b;
}

int main() {
  unsigned int a, b;
  cin >> a >> b;
  cout << lcm(a * b, gcd(a, b)) << endl;
}
