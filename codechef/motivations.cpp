#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, x;
    cin >> n >> x;
    int mx = 0;
    while (n--) {
      int s1, s2;
      cin >> s1 >> s2;
      if(s1 <= x) {
        mx = max(mx, s2);
      }
    }
    cout << mx << endl;
  }
}
