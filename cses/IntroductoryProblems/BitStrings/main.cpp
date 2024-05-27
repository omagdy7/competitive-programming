#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int m = 1e9 + 7;
  cin >> n;
  n--;
  long long ans = 2;
  while (n--) {
    ans = ((ans % m) * 2) % m;
  }
  cout << ans << '\n';
}
