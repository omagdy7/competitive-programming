#include<bits/stdc++.h>
#include <functional>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  freopen("cubes.in", "r", stdin);
	int tt;
	cin >> tt;
  int cnt = 0;
	while(tt--) {
    cnt++;
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for (auto &x : v) cin >> x;
    sort(v.begin(), v.end());
    cout << "Case " << cnt << ":\n";
    int j = 0;
    if (n & 1) {
      ans[n / 2] = v[0];
      for(int i = 0; i < n / 2; i++) {
        ans[n - 1 - i] = v[(n - 1) - j]; // 4 2 // 4
        ans[i] = v[(n - 2) - j]; // 3 1 / 0
        j += 2;
      }
    } else {
      for(int i = 0; i < n / 2; i++) {
        ans[n - 1 - i] = v[(n - 1) - j];
        ans[i] = v[(n - 2) - j];
        j += 2;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " \n"[i == n - 1];
    }
	}
}
