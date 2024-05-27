#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  string s;
  cin >> s;
  map<char, int> mp;
  int e = 0, o = 0;
  for (auto ch : s) {
    mp[ch]++;
  }
  string ans = "";
  int odds = 0;
  for (auto [key, value] : mp) {
    if (value % 2 == 0) {
      for (int i = 0; i < value / 2; i++) {
        ans += key;
      }
    }
  }
  for (auto [key, value] : mp) {
    if (value % 2 != 0) {
      odds++;
      for (int i = 0; i < value; i++) {
        ans += key;
      }
    }
  }
  for (auto it = mp.rbegin(); it != mp.rend(); ++it) {
    auto [key, value] = *it;
    if (value % 2 == 0) {
      for (int i = 0; i < value / 2; i++) {
        ans += key;
      }
    }
  }
  if (odds > 1) {
    cout << "NO SOLUTION\n";
  } else {
    cout << ans << '\n';
  }
}
