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

// 0 0 -2 3 5
// 0 -2 0 0 -2 0 0 -2 -2 3
// 7 5 3 5 3 3
// 3 5 7 100
//
// 1 1 1 1 2 2 2 2 4 5 -> n = 10
// 1 2 4 5 7
//

void generateCombinations(std::vector<int> &currentCombination,
                          const std::vector<int> &digits, int n,
                          std::vector<std::vector<int>> &allCombinations) {
  if (n == 0) {
    allCombinations.push_back(currentCombination);
    return;
  }

  for (int digit : digits) {
    currentCombination.push_back(digit);
    generateCombinations(currentCombination, digits, n - 1, allCombinations);
    currentCombination.pop_back();
  }
}

void solve() {
  int n;
  cin >> n;
  int nn = (n * (n - 1)) / 2;
  vi v(nn);
  for (auto &x : v) {
    cin >> x;
  }
  sort(all(v));
  int off = 0;
  for (int i = 0; i < n - 1; i++) {
    dbg(off);
    cout << v[off] << " ";
    off += (n - 1 - i);
  }
  dbg("------------");
  cout << INT_MAX << '\n';
}

void test(int n, vi v, vi test_against) {
  int nn = (n * (n - 1)) / 2;
  mpii fq;
  set<pii> st;
  int mx = 0;
  vi ans;
  for (int i = 0; i < nn; i++) {
    fq[v[i]]++;
    mx = max(mx, v[i]);
  }
  for (auto [k, v] : fq) {
    st.insert({-v, k});
  }
  auto it = st.begin()->second;
  for (int i = 0; i < n - st.size() - 1; i++) {
    // cout << it << ' ';
    ans.pb(it);
  }
  for (auto p : st) {
    // cout << p.second << ' ';
    ans.pb(p.second);
  }
  // cout << mx + 1;
  ans.pb(mx + 1);
  sort(all(test_against));
  sort(all(ans));
  for (int i = 0; i < n - 1; i++) {
    if (ans[i] != test_against[i]) {
      dbg("b =", v);
      dbg(" Out: ", ans, "\n", "Exp: ", test_against);
      dbg("------------------");
    }
  }
  // cout << '\n';
}

vi gen_b(vi &v) {
  vi b;
  for (int i = 0; i < v.size(); i++) {
    for (int j = i + 1; j < v.size(); j++) {
      b.push_back(min(v[i], v[j]));
    }
  }
  return b;
}

int main() {

  // std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  //
  // std::vector<int> currentCombination;
  // vector<vi> combinations;
  // generateCombinations(currentCombination, digits, 5, combinations);
  // for (int i = 0; i < combinations.size(); i++) {
  //   // dbg(gen_b(combinations[i]));
  //   test(5, gen_b(combinations[i]), combinations[i]);
  // }
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    solve();
  }
}
