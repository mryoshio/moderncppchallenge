#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b;

  do {
    if (a > b) {
      a %= b;
    } else {
      b %= a;
    }
    if (a == 0) {
      cout << b << endl;
      return 0;
    } else if (b == 0) {
      cout << a << endl;
      return 0;
    }
  } while (true);
}
