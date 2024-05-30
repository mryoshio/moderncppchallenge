#include <iostream>

using namespace std;
const unsigned int POWER_LIMIT = 5;

string to_bitset(int n) {
  string ret;
  for (int i = 0; i < POWER_LIMIT; i++) {
    ret += to_string(n%2);
    n /= 2;
  }
  reverse(ret.begin(), ret.end());
  return ret;
}

string to_gray_code(string in_str) {
  bitset<POWER_LIMIT> b(in_str);
  return (b ^ (b >> 1)).to_string();
}

string decode_gray_code(string in_str) {
  string s(1, in_str[0]);

  for (int i = 1; i < in_str.size(); i++) {
    s.push_back(s[s.size()-1] == in_str[i] ? '0' : '1');
  }

  return s;
}

int main() {
  cout << "bitset|gray_code|gray_code_decoded" << endl;
  for (int i = 0; i < pow(2, POWER_LIMIT); i++) {
    string bitset = to_bitset(i);
    string gray_code = to_gray_code(bitset);
    string decoded_gray_code = decode_gray_code(gray_code);
    cout << bitset << "|"
	 << gray_code << "|"
	 << decoded_gray_code
	 << endl;
  }
}
