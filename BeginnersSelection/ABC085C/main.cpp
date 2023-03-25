#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main() {
  int n, y;
  cin >> n >> y;

  for (int i = 0; i <= n; i++) {
    int total_i = 10000 * i;
    if (y < total_i) break;

    for (int j = 0; j <= n - i; j++) {
      int total_ij = total_i + j * 5000;
      if (y < total_ij) break;

      for(int k = 0; k <= n - i - j; k++) {
        int total = total_ij + k * 1000;
        if (y < total) break;
        
        if (total == y && i + j + k == n) {
          std::cout << i << " " << j << " " << k << endl;
          return 0;
        }
      }
    }
  }

  std::cout << "-1 -1 -1" << endl;
  return 0;
}