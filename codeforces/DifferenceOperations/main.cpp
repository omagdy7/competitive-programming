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
    vector<int> v(n);
    for (int &x : v)
      cin >> x;
    bool ok = true;
    for (int i = 1; i < n; ++i) {
      if (v[i] % v[0])
        ok = false;
    }
    cout << (ok ? "YES" : "NO") << endl;
  }
}
