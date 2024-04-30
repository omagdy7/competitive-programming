#include <bits/stdc++.h>
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

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (auto &x : v) {
    cin >> x;
  }
  int m;
  cin >> m;
  vpii queries(m);
  for (auto &[e1, e2] : queries) {
    cin >> e1 >> e2;
  }
  unordered_map<int, int> nodes;
  nodes[v[0]] = v[1];
  nodes[v[n - 1]] = v[n - 2];
  for (int i = 1; i < n - 1; i++) {
    if (v[i] - v[i - 1] < v[i + 1] - v[i]) {
      nodes[v[i]] = v[i - 1];
    } else {
      nodes[v[i]] = v[i + 1];
    }
  }
  vi pfx(n);
  vi suffix(n);
  pfx[0] = 0;
  for (int i = 1; i < n; i++) {
    pfx[i] = pfx[i - 1] + (nodes[v[i - 1]] == v[i] ? 1 : v[i] - v[i - 1]);
  }
  sort(rall(v));
  for (int i = 1; i < n; i++) {
    suffix[i] = suffix[i - 1] + (nodes[v[i - 1]] == v[i] ? 1 : v[i - 1] - v[i]);
  }
  reverse(all(suffix));
  for (auto [start, end] : queries) {
    start--;
    end--;
    if (start < end) {
      cout << pfx[end] - pfx[start] << '\n';
    } else {
      cout << suffix[end] - suffix[start] << '\n';
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
