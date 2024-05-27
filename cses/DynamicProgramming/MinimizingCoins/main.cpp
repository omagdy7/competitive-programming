#pragma GCC optimize("O3")
#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
#include <unordered_map>

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

vi c;

int rec(int n) {
  static int sz = n + 1;
  static vi cache(n + 1, sz);
  if (n == 0) {
    cache[0] = 0;
    return 0;
  } else {
    if (cache[n] != sz) {
      return cache[n];
    }
    int mn = sz;
    for (int i = 0; i < c.size(); i++) {
      if (n - c[i] >= 0) {
        int xx = rec(n - c[i]);
        mn = min(mn, 1 + xx);
      }
    }
    cache[n] = mn;
    return cache[n];
  }
}

void solve() {
  int n, x;
  cin >> n >> x;
  c.resize(n);
  for (auto &ci : c) {
    cin >> ci;
  }
  vi dp(x + 1, x + 1);
  dp[0] = 0;
  for (int i = 1; i <= x; i++) {
    for (auto ci : c) {
      if (i - ci >= 0) {
        dp[i] = min(dp[i], 1 + dp[i - ci]);
      }
    }
  }
  if (dp[x] == x + 1) {
    cout << -1 << '\n';
  } else {
    cout << dp[x] << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  solve();
}
