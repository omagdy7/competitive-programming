#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      ans += x;
    }
    cout << abs(ans) << '\n';
  }
}
