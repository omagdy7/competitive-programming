#include <bits/stdc++.h>
#include <climits>

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
  int n, m, k;
  cin >> n >> m >> k;
  vll a(n), b(m);
  ll min_a = INT_MAX;
  ll min_b = INT_MAX;
  ll max_a = 0;
  ll max_b = 0;
  ll sum = 0;
  for (auto &x : a) {
    cin >> x;
    sum += x;
    min_a = min(min_a, x);
    max_a = max(max_a, x);
  }
  for (auto &x : b) {
    cin >> x;
    min_b = min(min_b, x);
    max_b = max(max_b, x);
  }
  ll mx = max(max_a, max_b);
  ll mn = min(min_a, min_b);
  ll tmp = sum + (max_b - min_a);
  if (mx == max_a && mn == min_a) {
    if (k % 2 == 1) {
      cout << tmp << '\n';
    } else {
      cout << tmp + (mn - mx) << '\n';
    }
  } else if (mx == max_b && mn == min_b) {
    if (k % 2 == 1) {
      cout << tmp << '\n';
    } else {
      cout << tmp + (mn - mx) << '\n';
    }
  } else if (mx == max_a && mn == min_b) {
    if (k % 2 == 1) {
      if (max_b <= min_a) {
        cout << sum << '\n';
      } else {
        cout << tmp << '\n';
      }
    } else {
      if (max_b <= min_a) {
        cout << sum + (mn - mx) << '\n';
      } else {
        cout << tmp + (mn - mx) << '\n';
      }
    }
  } else {
    if (k % 2 == 1) {
      cout << tmp << '\n';
    } else {
      cout << sum << '\n';
    }
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
