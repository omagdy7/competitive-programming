#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, y;
    cin >> n >> y;
    vector<int> v(2 * n);
    int ans = 0;
    for (int &x : v)
      cin >> x;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      int x = v[i];
      int z = v[i + n];
      if (z - x >= y) {
        ans++;
      }
    }
    if (ans == n) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
