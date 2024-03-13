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

bool isChip(vi v) {
  v.resize(unique(all(v)) - v.begin());
  int n = v.size();
  if (n == 2) {
    return true;
  } else if (n == 1 && v[0] == 1) {
    return true;
  } else if (n == 3 && v[0] == 0 && v[1] == 1 && v[2] == 0) {
    return true;
  } else {
    return false;
  }
}

int rfind(vi &v) {
  int n = v.size();
  for (int i = n - 1; i >= 0; --i) {
    if (v[i] == 1) {
      return i;
    }
  }
  return -1;
}

int helper(vi &v, int idx) {
  int n = v.size();
  for (int i = idx; i >= 0; --i) {
    if (v[i] == 0) {
      return i;
    }
  }
  return -1;
}

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (auto &x : v) {
    cin >> x;
  }
  int cnt = 0;
  while (!isChip(v)) {
    auto last_one = rfind(v);
    auto first_zero_before_last_one = helper(v, last_one);
    swap(v[last_one], v[first_zero_before_last_one]);
    cnt++;
  }
  cout << cnt << '\n';
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
