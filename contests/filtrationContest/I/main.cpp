#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(auto &x : v) cin >> x;
  vector<long long> dp(n);
  for (int i = 0; i < k; i++) {
    dp[0] += v[i];
  }
  for (int i = 1; i <= n - k; i++) {
    dp[i] = dp[i - 1] + v[i + k - 1] - v[i - 1];
  }
  cout << min_element(dp.begin(), dp.end() - k + 1) - dp.begin() + 1 << endl;
}
