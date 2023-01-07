#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, c, m;
    cin >> n >> c >> m;
    long long ans = n / c, cur = ans;
    while (cur >= m) {
      ans += cur / m;
      cur = (cur % m) + (cur / m);
    }
    cout << ans << '\n';
  }
  return 0;
}
