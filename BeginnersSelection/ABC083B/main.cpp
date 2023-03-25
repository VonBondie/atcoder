#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

int sumAllDights(int n) {
  int sum = 0;
  while(n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  ll sum = 0;
  for(int i = 1; i <= N; i++) {
    int tmp = sumAllDights(i);
    if(A <= tmp && tmp <= B) {
      sum += i;
    }
  }

  int ans = sum;

  cout << ans << endl;
  return 0;
}