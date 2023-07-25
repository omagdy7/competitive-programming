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

ll calc_penalty(vll &v, int b) {
  ll penalty = 0;
  ll pref = 0;
  for (int i = 0; i < b; i++) {
    pref += v[i];
    penalty += pref;
  }
  return penalty;
}

int calc_problems(vll &v, int h) {
  ll sum = 0;
  for (int i = 0; i < v.size(); i++) {
    if (sum + v[i] > h) {
      return i;
    }
    sum += v[i];
  }
  return v.size();
}

struct triple {
  int pos;
  int first;
  ll second;
};

// operator overloading for == for the triple struct
bool operator==(const triple &p1, const triple &p2) {
  return p1.first == p2.first && p1.second == p2.second;
}

ostream &operator<<(ostream &os, const triple &tr) {
  os << "\n  {" << tr.first << ' ' << tr.second << ' ' << tr.pos << "}";
  return os;
}

bool customComparator(triple &p1, triple &p2) {
  if (p1.first > p2.first)
    return true;
  else if (p1.first == p2.first && p1.second == p2.second) {
    return p1.pos == 0;
  } else if (p1.first == p2.first)
    return p1.second < p2.second;
  return false;
}

void solve() {
  int n, m, h;
  cin >> n >> m >> h;
  vector<triple> mp(n);
  for (int i = 0; i < n; i++) {
    vll v(m);
    for (auto &x : v) {
      cin >> x;
    }
    sort(all(v));
    int b = calc_problems(v, h);
    ll pen = calc_penalty(v, b);
    mp[i] = {i, b, pen};
  }
  sort(all(mp), customComparator);
  for (int i = 0; i < n; i++) {
    if (mp[i].pos == 0) {
      cout << i + 1 << '\n';
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
