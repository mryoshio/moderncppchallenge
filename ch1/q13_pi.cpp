#include <iostream>
#include <cmath>

using namespace std;

int main() {
  unsigned int n; cin >> n;
  for (unsigned int i = 1; i <= n; i++) {
    if (i % 10 != 0) continue;
    double d = 360.0/i;
    double t = tan(M_PI * d / 180);
    cout << i << ": " << t*i/2 << endl;
  }
}
