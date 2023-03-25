#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  vector<int> a;
  cin >> N;

  a.resize(N);
  for(int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>{});

  int Alice = 0;
  int Bob = 0;
  for(int i = 0; i < a.size(); i++) {
    switch(i%2) {
      case 0: Alice +=a.at(i);break;
      case 1: Bob +=a.at(i);break;
    }
  }

  int ans = Alice - Bob;

  cout << ans << endl;
  return 0;
}