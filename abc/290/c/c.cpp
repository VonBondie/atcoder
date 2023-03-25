#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

// macro
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define PRINT_YN(b) cout << b ? "Yes" : "No" << endl;

// type
using LL = long long;
using PII = pair<int, int>;
using PFF = pair<double, double>;

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  for(auto&& ai: a) cin >> ai;

  vector<int> count(n+1, 0);

  count[0] = std::count(a.begin(), a.end(), 0);
  int total_count = count[0];
  int m = 0; 
  for(int i = 1; i < n; i++) {
    count[i] = std::count(a.begin(), a.end(), i);
    if(!count[i]) break;

    if(total_count >= k) m = i;
    total_count += count[i];
    if(k+1 == i) break;
  }
  cout << m << endl;
}

int main() {
#ifdef ONLINE_JUDGE 
  const int n_testcase = 1;  // Don't change here!!
#else
  const int n_testcase = 1;  // Change here for test cases.
#endif

  rep(i, n_testcase) {
    solve();
  }

  return 0;
}