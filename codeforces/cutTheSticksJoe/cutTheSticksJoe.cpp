#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  map<int, int> mp;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    ++mp[x];
  }
  for (auto p : mp) {
    cout << n << '\n';
    n -= p.second;
  }
  return 0;
}
