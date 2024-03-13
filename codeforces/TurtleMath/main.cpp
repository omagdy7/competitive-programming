#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using vi = vector<int>;
using vll = vector<long long>;
using mpii = map<int, int>;
using mpll = map<ll, ll>;
using db = long double;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound
#define make_unique(x)                                                         \
  sort(all((x)));                                                              \
  (x).resize(unique(all((x))) - (x).begin())
#define ceil(a, b) ((a) + (b)-1) / (b)

const int mod = (int)1e9 + 7;
const db pi = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...) 42
#endif

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */

set<int> st1;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  long long sum = 0;
  for (auto &x : v) {
    cin >> x;
    sum += x;
  }
  if (sum % 3 == 0) {
    cout << 0 << '\n';
    return;
  } else {
    if (sum % 3 == 1) {
      for (int i = 0; i < n; ++i) {
        if (st1.count(v[i])) {
          cout << 1 << '\n';
          return;
        }
      }
    }
  }
  cout << 3 - (sum % 3) << '\n';
}

int main() {
  for (int i = 0; i < 1e5; i++) {
    st1.insert(1 + i * 3);
  }
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
