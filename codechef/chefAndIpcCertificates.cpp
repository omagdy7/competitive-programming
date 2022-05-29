#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    vector<int> v(k);
    for (int &x : v)
      cin >> x;
    int q;
    cin >> q;
    if (accumulate(v.begin(), v.end(), 0) >= m && q <= 10) {
      ans++;
    }
  }
    cout << ans << '\n';
}
