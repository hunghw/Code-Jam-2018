#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
void TroubleSort(vector<int>& V, int N) {
  for (int i = 0; i < N - 2; ++i) {
    for (int j = 0; j < N - 2; ++j) {
      if (V[j] > V[j + 2]) swap(V[j], V[j + 2]);
    }
  }
  return;
}
int main() {
  int T, t;
  cin >> T;
  t = T;
  // cout << T;
  while (t--) {
    double A;
    cin >> A;
    cout << "Case #" << T - t << ":" << endl;

    double theta[] = {(acos(A / sqrt(2)) + M_PI / 4),
                      (acos(A / sqrt(2)) - M_PI / 4)};
    double res[] = {sin(theta[0]) / 2, cos(theta[0]) / 2, sin(theta[1]) / 2,
                    cos(theta[1]) / 2};
    cout << res[0] << " " << res[1] << " " << 0 << "\t" << endl;
    // cout << pow(res[0], 2) + pow(res[1], 2) << endl;
    cout << res[2] << " " << cos(theta[1]) / 2 << " " << 0 << "\t" << endl;
    // cout << pow(res[2], 2) + pow(res[3], 2) << endl;
    cout << "0 0 0.5\n";
  }
  return 0;
}