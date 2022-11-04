#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  int ans = 0;
  for (int i = 1; i <= d; i++) {
    if (i % m == 0 || i % k == 0 || i % n == 0 || i % l == 0) {
      ans++;
    }
  }
  cout << ans << endl;
}
