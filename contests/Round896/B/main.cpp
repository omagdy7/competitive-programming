#include <bits/stdc++.h>
#include <climits>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vpi = vector<pii>;
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

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

template <typename K, typename V>
ostream &operator<<(ostream &os, const pair<K, V> &p);
template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec);
template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m);
template <typename K, typename V>
ostream &operator<<(ostream &os, const unordered_map<K, V> &m);
template <typename T> ostream &operator<<(ostream &os, const set<T> &s);
template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s);

template <typename K, typename V>
ostream &operator<<(ostream &os, const pair<K, V> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const vector<T> &vec) {
  os << "{";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0)
      os << ", ";
    os << vec[i];
  }
  os << "}";
  return os;
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const map<K, V> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename K, typename V>
ostream &operator<<(ostream &os, const unordered_map<K, V> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename T> ostream &operator<<(ostream &os, const set<T> &s) {
  int i = 0;
  os << "{";
  for (const auto &e : s) {
    if (i > 0)
      os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

template <typename T>
ostream &operator<<(ostream &os, const unordered_set<T> &s) {
  int i = 0;
  os << "{";
  for (const auto &e : s) {
    if (i > 0)
      os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

void dbg() { cerr << "\n"; }

template <typename T, typename... TS> void dbg(T val, TS... vals) {
  cerr << val << " ";
  dbg(vals...);
}

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */

// (-1, 3) -> (-3, -3) = 2 + 6 = 8
// (-1, 3) -> (-2, 3) -> (-3, -3) = 1 + 0 + 1 + 6 = 8

void solve() {
  int n, k, a, b;
  cin >> n >> k >> a >> b;
  vector<vector<ll>> v(n, vector<ll>(2));
  for (int i = 0; i < n; i++) {
    cin >> v[i][0] >> v[i][1];
  }
  if (a <= k && b <= k) {
    cout << 0 << '\n';
    return;
  }
  a--;
  b--;
  int idx_e = 0;
  ll mn_end = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (i != b && mn_end > abs(v[b][0] - v[i][0]) + abs(v[b][1] - v[i][1])) {
      idx_e = i;
      mn_end = min(mn_end, abs(v[b][0] - v[i][0]) + abs(v[b][1] - v[i][1]));
    }
  }
  int idx_a = 0;
  ll mn = INT_MAX;
  for (int i = 0; i < k; i++) {
    if (i != idx_e &&
        mn > abs(v[idx_e][0] - v[i][0]) + abs(v[idx_e][1] - v[i][1])) {
      idx_a = i;
      mn = min(mn, abs(v[idx_e][0] - v[i][0]) + abs(v[idx_e][1] - v[i][1]));
    }
  }
  ll ans = 0;
  if (idx_a + 1 <= k && idx_e + 1 <= k) {
    if (idx_a + 1 > k || a + 1 > k) {
      ans += abs(v[idx_a][0] - v[a][0]) + abs(v[idx_a][1] - v[a][1]);
    }
  } else {
    ans += abs(v[a][0] - v[idx_e][0]) + abs(v[a][1] - v[idx_e][1]);
  }

  if (idx_e + 1 > k || b + 1 > k) {
    ans += abs(v[b][0] - v[idx_e][0]) + abs(v[b][1] - v[idx_e][1]);
  }
  cout << ans << '\n';
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
