#include <bits/stdc++.h>
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
#define ceil(a, b) ((a) + (b) - 1) / (b))

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

ll factorial(ll n) {
  ll ans = 1;
  for (ll i = 2; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

void solve() {
  ll n;
  cin >> n;
  vll v;
  int i = 0;
  int ans = 0;
  for (int i = 0; i < 25; i++) {
    v.pb(factorial(i));
  }
  dbg(ans);
  ll mx = 1;
  dbg(v.size());
  for (ll i = 1; i < v.size(); i++) {
    for (ll j = i + 1; j < v.size(); j++) {
      if (n % (v[j] / v[i - 1]) == 0) {
        mx = max(mx, j - i + 1);
        dbg("j: ", j, "i: ", i);
        dbg(v[j] / v[i]);
      }
    }
  }
  dbg("=================");
  cout << mx << '\n';
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
