#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for(auto&x : v) cin >> x;
  int ans = 1;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += v[i];
    if (sum > m) {
      ans++;
      sum = v[i];
    }
  }
  cout << ans << '\n';
}
