#include <iostream>
#include <vector>

using namespace std;

unsigned int const LIMIT = 1000000;
unsigned int max_step_i = 0;
vector<unsigned int> m(LIMIT * 10, 0);

int main() {
  m[1] = 0;

  for (unsigned int i = 2; i < LIMIT; i++) {
    unsigned int n = i;
    unsigned int step = 0;

    while (true && n < LIMIT) {
      if (n == 1) {
        m[i] = step;
        if (m[i] > m[max_step_i]) {
          max_step_i = i;
        }
        break;
      } else if (m[n] > 0) {
        m[i] = step + m[n];
        if (m[i] > m[max_step_i]) {
          max_step_i = i;
        }
        break;
      }

      if (n % 2 == 0) {
        n /= 2;
      } else {
        n = n * 3 + 1;
      }

      step++;
    }
  }

  cout << "number: " << max_step_i << endl;
  cout << "step: " << m[max_step_i] << endl;
}
