#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;

bool check(const string& s, string& t, string w) {
  string::size_type tale = t.size(); 
  string::size_type pos = s.find(w, tale);
  if(pos == tale) {
    t+= w;
    return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  reverse(s.begin(), s.end());

  string t;

  string::size_type tale;

  string dreamer("dreamer"), dream("dream");
  string eraser("eraser"), erase("erase");
  reverse(dreamer.begin(), dreamer.end());
  reverse(dream.begin(), dream.end());
  reverse(eraser.begin(), eraser.end());
  reverse(erase.begin(), erase.end());

  while(s != t) {
    if (check(s, t, dreamer)) continue;
    if (check(s, t, dream)) continue;
    if (check(s, t, eraser)) continue;
    if (check(s, t, erase)) continue;
    break;
  }

  string ans = (s == t) ? "YES" : "NO";

  cout << ans << endl;
  return 0;
}