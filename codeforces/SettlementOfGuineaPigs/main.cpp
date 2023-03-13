#include<bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    cin >> n;
    int cur = 0;
    int pigs = 0;
    int ans = 0;
    auto get = [&](int x) {
      return x == 0 ? 0 : (1 + x / 2);
    };
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x == 1) {
        pigs += 1;
      } else {
        ans = max(ans, get(cur) + pigs);
        cur += pigs;
        pigs = 0;
      }
    }
    ans = max(ans, get(cur) + pigs);
    cout << ans << '\n';
  }
}
