#include <iostream>
#include <sstream>

using namespace std;

const string PREFIX = "ISBN";

bool is_valid(stringstream& ss) {
  char c;
  int d = 11;
  int acc = 0;

  while (ss >> c) {
    if (c == '-') continue;

    if (--d == 1) {
      int x = 11 - acc % 11;
      switch (x) {
      case 10:
	return c == 'X';
      case 11:
	return c == '0';
      default:
	return c == x + '0';
      }
    } else {
      acc += (c - '0') * d;
    } 
  }

  return false;
}

int main() {
  string buf, in_s; cin >> in_s;
  stringstream ss(in_s);

  while (ss >> buf) {
    size_t pos = buf.find(PREFIX);
    if (pos != string::npos) {
      buf.erase(pos, PREFIX.length());
    }
    ss.str(buf);
  }
  ss.clear();

  cout << (is_valid(ss) ? "OK" : "NG") << endl;
}
