#include <bits/stdc++.h>

using namespace std;

bool isCool(vector<int> &a, int i) {
  if (i == 0) {
    return false;
  }
  if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
    return true;
  }
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
      cin >> x;
    long long ans = 0;
    long long mx = 0;
    int max_cool = (n - 1) / 2;
    int cnt = 0;
    if(n > 3) {
      for (int i = 1; i < n - 1; i++) {
        if(isCool(a,i)) {
          cnt++;
        }
        if (!isCool(a, i) && i % 2 == 0) {
          ans += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
        } else if(!isCool(a, i) && i % 2 != 0) {
          mx += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
        }
      }
      long long mx2 = 0;
      for (int i = 1; i < n - 1; i += 3) {
        if (!isCool(a, i)) {
          mx2 += abs(a[i] - max(a[i - 1], a[i + 1])) + 1;
        }
      }
      cerr << mx << " " << ans << " " << mx2 << endl;
      if(cnt < max_cool) {
        // cout << max(mx2, max(ans, mx)) << endl;
      } else {
        cout << min(mx2, min(ans, mx)) << endl;
      }

    } else {
      cout << abs(a[1] - max(a[0], a[2])) + 1 << endl;
    }
  }
}
