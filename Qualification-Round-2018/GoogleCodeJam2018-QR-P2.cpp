#include <algorithm>
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
  while (t--) {
    int N;
    cin >> N;
    vector<int> V(N, 0);
    int in;
    for (int i = 0; i < N; ++i) {
      cin >> V[i];
    }
    TroubleSort(V, N);
    // for (int i = 0; i < N; ++i) {
    // cout << V[i] << " ";
    //}
    // cout << endl;
    int res = 0;
    for (; res < N - 1; ++res) {
      if (V[res] > V[res + 1]) break;
    }
    if (res < N - 1) {
      cout << "Case #" << T - t << ": " << res << endl;
    } else
      cout << "Case #" << T - t << ": "
           << "OK" << endl;
  }
  return 0;
}