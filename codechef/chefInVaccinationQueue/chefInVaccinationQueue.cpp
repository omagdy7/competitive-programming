#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, p, x, y;
    cin >> n >> p >> x >> y;
    vector<int> v(n);
    int ans = 0;
    for (int &x : v)
      cin >> x;
    for (int i = 0; i < p; i++) {
      if (v[i] == 0) {
        ans += x;
      } else {
        ans += y;
      }
    }
    cout << ans << endl;
  }
}
