#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> pow2(30, 1);
  for (int i = 0; i < 30; ++i) {
    pow2[i] <<= i;
  }

  int T, t;
  cin >> T;
  t = T;
  while (t--) {
    int D, sum = 0, total_charge = 0, step = 0, p_len;
    string P;
    vector<bool> p;
    vector<int> charge_index;

    cin >> D >> P;
    p_len = P.size();
    for (int i = 0; i < p_len; ++i) {
      if (P[i] == 'C') {
        p.push_back(true);
        ++total_charge;
        charge_index.push_back(i);
      } else {
        p.push_back(false);
        sum += pow2[total_charge];
      }
    }
    int total_shoot = p_len - total_charge;
    if (total_shoot > D) {
      cout << "Case #" << T - t << ": IMPOSSIBLE" << endl;
      continue;
    }
    --p_len;
    --total_charge;
    // continue;
    do {
      if (sum <= D) break;
      if (charge_index[total_charge] == p_len) {
        --p_len;
        --total_charge;
        continue;
      }
      ++charge_index[total_charge];
      // cout << total_charge << "==" << pow2[total_charge] << endl;
      sum -= pow2[total_charge];
      ++step;

    } while (charge_index[0] < (total_shoot));
    // for (int i : charge_index) cout << i << " ";
    // cout << sum << endl;
    cout << "Case #" << T - t << ": " << step << endl;
  }
  return 0;
}