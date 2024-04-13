#include <algorithm>
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

// 11
// 6 4 2

void solve() {
  int n;
  ll k;
  cin >> n >> k;
  vi v(n);
  ll sum = 0;
  for (auto &x : v) {
    cin >> x;
    sum += x;
  }
  vi tmp = v;
  reverse(all(tmp));
  vll prefix(n + 1);
  vll suffix(n + 1);
  prefix[0] = 0;
  suffix[0] = 0;
  for (int i = 1; i < n + 1; i++) {
    prefix[i] = prefix[i - 1] + v[i - 1];
    suffix[i] = suffix[i - 1] + tmp[i - 1];
  }
  if (k >= sum) {
    cout << n << '\n';
  } else {
    int ans = 0;
    if (k % 2 == 0) {
      ll first = k / 2;
      ll last = k / 2;
      auto it_first = lower_bound(all(prefix), first);
      auto it_last = lower_bound(all(suffix), last);
      ans = (it_first - prefix.begin()) + (it_last - suffix.begin());
      if (*it_first > first) {
        ans--;
      }
      if (*it_last > last) {
        ans--;
      }
    } else {
      ll first = (k / 2) + 1;
      ll last = k / 2;
      auto it_first = lower_bound(all(prefix), first);
      auto it_last = lower_bound(all(suffix), last);
      ans = (it_first - prefix.begin()) + (it_last - suffix.begin());
      if (*it_first > first) {
        ans--;
      }
      if (*it_last > last) {
        ans--;
      }
    }
    cout << ans << '\n';
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
