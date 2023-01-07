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
    int ans = 0;
    vector<int> v(n);
    vector<int> v2;
    for (int &x : v) {
      cin >> x;
      v2.push_back(x);
    }
    if (n > 1) {
      for (int i = 0; i < n - 1; i++) {
        if (v[i] < v[i + 1]) {
          v[i + 1] = v[i];
        }
      }
    }
    for (int i = 0; i < n; i++) {
      if(v[i] == v2[i]) ans++;
    }
      cout << ans << endl;
  }
}
