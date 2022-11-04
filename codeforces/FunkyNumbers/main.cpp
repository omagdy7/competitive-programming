#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  n = n * 2;
  set<long long> st;
  for (int i = 1; i * i <= n; i++) {
    st.insert(i * (i + 1));
  }
  bool ok = false;
  for (auto x : st) {
    cerr << x << endl;
    if(st.count(n - x)) {
      ok = true;
      break;
    }
  }
  cout << (ok ? "YES" : "NO") << endl;
}
