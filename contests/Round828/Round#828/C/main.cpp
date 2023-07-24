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
    int m = 0, mx = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      while (x % 2 == 0) {
        x /= 2;
        m += 1;
      }
    }
    if (m >= n) {
      cout << 0 << '\n';
    } else {
      int d = n - m, ans = 0;
      vector<int> a;
      for (int i = n; i >= 1; i--) {
        int j = i, cnt = 0;
        while (j % 2 == 0) {
          cnt += 1;
          j /= 2;
        }
        if (cnt != 0) {
          a.push_back(cnt);
        }
      }
      sort(a.rbegin(), a.rend());
      for (int i = 0; i < (int)a.size(); i++) {
        ans += 1;
        d -= a[i];
        if (d <= 0) {
          break;
        }
      }
      cout << (d <= 0 ? ans : -1) << '\n';
    }
	}
}
