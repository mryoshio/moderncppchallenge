#include <iostream>

using namespace std;
const unsigned int POWER_LIMIT = 5;

int main() {
  cout << "bitset|gray_code|gray_code_decoded" << endl;
  for (int i = 0; i < pow(2, POWER_LIMIT); i++) {
    bitset<POWER_LIMIT> b(i);
    bitset<POWER_LIMIT> g(b ^ (b >> 1));
    bitset<POWER_LIMIT> d(g);

    for (int i = 1; i < g.size(); i++)
      d[POWER_LIMIT-i-1] = d[POWER_LIMIT-i] ^ d[POWER_LIMIT-i-1];

    cout << b << "|" << g << "|" << d << endl;
  }
}
