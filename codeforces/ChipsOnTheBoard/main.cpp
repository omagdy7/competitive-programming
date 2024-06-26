#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>

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

void solve() {
  ll n;
  cin >> n;
  vll a(n), b(n);
  for (auto &x : a) {
    cin >> x;
  }
  for (auto &x : b) {
    cin >> x;
  }

  ll sum_a = accumulate(all(a), 0LL);
  ll sum_b = accumulate(all(b), 0LL);
  ll min_a = *min_element(all(a));
  ll min_b = *min_element(all(b));
  dbg(sum_a, sum_b);

  cout << min(min_a * n + sum_b, min_b * n + sum_a) << '\n';
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
