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

struct Time {
  int H;
  int M;

  bool operator<(const Time &other) const {
    if (H < other.H) {
      return true;
    } else if (H == other.H) {
      if (M < other.M) {
        return true;
      } else {
        return false;
      }
    }
    return false;
  }
  Time operator-(const Time &other) const {
    Time result;
    result.H = H - other.H;
    result.M = M - other.M;
    if (result.M < 0) {
      result.M += 60;
    }
    return result;
  }
};

void solve() {
  int n;
  Time bedtime;
  cin >> n >> bedtime.H >> bedtime.M;
  vector<Time> v(n);
  bool flag = false;
  for (auto &x : v) {
    cin >> x.H >> x.M;
    if (x.H == bedtime.H && x.M == bedtime.M) {
      flag = true;
    }
    if (x.H < 12) {
      x.H += 23;
    }
  }
  if (flag) {
    cout << 0 << ' ' << 0 << '\n';
    return;
  }
  Time mn = v[0];
  Time mx = {0, 0};
  for (int i = 0; i < n; i++) {
    Time cur = v[i];
    cur.H = cur.H % 24;
    if (cur < mn) {
      mn = v[i];
    }
  }
  dbg(mn.H, mn.M);
  cout << (mn - bedtime).H % 24 << ' ' << (mn - bedtime).M << '\n';
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
