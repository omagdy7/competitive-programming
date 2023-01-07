#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  set<int> taken;
  vector<int> v(n);
  vector<int> a(m);
  for (auto &x : v) cin >> x;
  for (auto &x : a) cin >> x;
  sort(all(a));
  int ans = 0;
  for (int i = 0; i < n; i++) {
    auto upper = *upper_bound(all(a), v[i]);
    auto lower = *lower_bound(all(a), v[i]);
    cerr << upper << " " << lower << "\n";
    if(!taken.count(i) && (upper <= v[i] + k || lower >= v[i] - k)) {
      taken.insert(i);
      ans++;
    }
  }
  cout << ans << '\n';

}
