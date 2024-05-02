#include <iostream>
#include <map>
#include <sstream>

using namespace std;

map<int, string> m = {
  {1000, "M"},
  {900, "CM"},
  {500, "D"},
  {400, "CD"},
  {100, "C"},
  {90, "XC"},
  {50, "L"},
  {40, "XL"},
  {10, "X"},
  {9, "IX"},
  {5, "V"},
  {4, "IV"},
  {1, "I"}
};

int main() {
  stringstream ss;
  unsigned int n;
  cin >> n;

  for (map<int, string>::reverse_iterator it = m.rbegin(); it != m.rend() && n != 0; ++it) {
    int dv = it->first;
    while (n/dv > 0) {
      for (int i = 0; i < n/dv; i++)
	ss << it->second;
      n = n % dv;
    }
  }
  cout << ss.str() << endl;
}
