#include <iostream>

using namespace std;

class IPv4 {
private:
  string ip;

public:
  IPv4(string ip) : ip(ip) {}

  void dump() {
    cout << "ip: " << ip << endl;
  }
};

int main() {
  string in_s; cin >> in_s;
  IPv4 ip(in_s);
  ip.dump();
}
