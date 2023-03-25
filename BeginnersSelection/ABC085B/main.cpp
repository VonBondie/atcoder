#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  cin >> n;
  std::vector<int> d(n);
  for(auto&& di : d) {
    cin >> di;
  }

  sort(d.begin(), d.end(), greater<int> {});

  int top = 101;
  int count = 0;
  for(auto&& di : d) {
    if(top > di) {
      top = di;
      count++;
    }
  }

  int ans = count;

  cout << ans << endl;
  return 0;
}