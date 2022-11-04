#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, x;
  cin >> n >> x;
  vector<int> v(n);
  for (auto &x : v) cin >> x;
  map<int, int> mp;
  pair<int, int> ans;
  bool found = 0;
  for (int i = 0; i < n; i++) mp[v[i]] = i + 1;
  for (int i = 0; i < n; i++) {
    if (mp.count(x - v[i]) && i + 1 != mp[x - v[i]]) {
      ans.first = i + 1;
      ans.second = mp[x - v[i]];
      found = 1;
      break;
    }
  }
  if (found) {
    cout << ans.first << " " << ans.second;
  } else {
    cout << "IMPOSSIBLE";
  }
}
