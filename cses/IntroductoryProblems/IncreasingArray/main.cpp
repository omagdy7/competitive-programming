#include<bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int mx = 0;
  long long ans = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    mx = max(mx , x);
    ans += max(mx - x, 0);
  }
  cout << ans << "\n";
}
