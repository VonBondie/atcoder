#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
using p = pair<int, int>;
using pf = pair<double, double>;

bool check(const int t, const p start, const p goal) {
  int xv = abs(goal.first - start.first);
  int yv = abs(goal.second - start.second);

  if(t < xv + yv) return false;
  if((t - xv - yv) % 2 == 0) return true;
  return false;
}

int main() {
  int n;
  cin >> n;

  std::vector<int> t(n);
  std::vector<p> cod(n);
  for(int i = 0; i < n; i++) {
    cin >> t[i] >> cod[i].first >> cod[i].second;
  }
  cod.insert(cod.begin(), p(0, 0));
  t.insert(t.begin(), 0);

  for(int i = 1; i <= n; i++) {
    int time = t[i] - t[i - 1];
    if(!check(time, cod[i - 1], cod[i])) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}