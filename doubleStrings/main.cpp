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
    vector<string> v(n);
    for (auto &x : v)
      cin >> x;
    set<string> st(v.begin(), v.end());
    string ans = "";
    for (int i = 0; i < n; i++) {
      int len = v[i].size();
      bool ok = false;
      for (int j = 0; j < len; j++) {
        string prefix = v[i].substr(0, j + 1);
        if (st.find(prefix) != st.end()) {
          string suff = v[i].substr(j + 1);
          ok = ok || st.find(suff) != st.end();
        }
      }
      ans += ('0' + ok);
    }
    cout << ans << endl;
  }
}
