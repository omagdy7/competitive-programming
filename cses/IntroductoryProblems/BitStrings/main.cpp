#include<bits/stdc++.h>

using namespace std;

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  int m = 1e9 + 7;
  cin >> n;
  long long ans = 0;
  while(n--) {
    ans += ((2 % m) * (2 % m)) % m;
  }
  cout << ans << '\n';
}
