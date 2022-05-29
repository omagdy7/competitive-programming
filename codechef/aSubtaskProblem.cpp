#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    int count = 0;
    bool ok = false;
    for (int i = 0; i < v.size(); i++) {
      if(v[i] == 0 && i <= m - 1) {
        ok = true;
      }
      if (v[i] == 1)
        count++;
    }
    if(count == n) {
      cout << 100 << '\n';
    } else if(!ok) {
      cout << k << '\n';
    } else {
      cout << 0 << '\n';
    }
  }
}
