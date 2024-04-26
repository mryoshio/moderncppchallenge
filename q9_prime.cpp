#include <iostream>

using namespace std;

int main() {
  vector<int> ret;
  int n;

  cin >> n;

  for (int i = 2; i <= n; i++) {
    while (n % i == 0) {
      ret.push_back(i);
      n /= i;
    }
  }

  for (vector<int>::iterator it = ret.begin(); it != ret.end(); it++) {
    cout << *it << endl;
  }
}


