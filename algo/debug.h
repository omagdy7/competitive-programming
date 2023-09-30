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

template <typename k, typename v>
ostream &operator<<(ostream &os, const pair<k, v> &p);
template <typename t> ostream &operator<<(ostream &os, const vector<t> &vec);
template <typename k, typename v>
ostream &operator<<(ostream &os, const map<k, v> &m);
template <typename k, typename v>
ostream &operator<<(ostream &os, const unordered_map<k, v> &m);
template <typename t> ostream &operator<<(ostream &os, const set<t> &s);
template <typename t>
ostream &operator<<(ostream &os, const unordered_set<t> &s);

template <typename k, typename v>
ostream &operator<<(ostream &os, const pair<k, v> &p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template <typename t> ostream &operator<<(ostream &os, const vector<t> &vec) {
  os << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0)
      os << ", ";
    os << vec[i];
  }
  os << "]";
  return os;
}

template <typename t>
ostream &operator<<(ostream &os, const vector<vector<t>> &vec) {
  os << "[\n";
  for (size_t i = 0; i < vec.size(); ++i) {
    os << "  " << vec[i];
    if (i > 0)
      os << ", ";
    os << '\n';
  }
  os << "]";
  return os;
}

template <typename k, typename v>
ostream &operator<<(ostream &os, const map<k, v> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename k, typename v>
ostream &operator<<(ostream &os, const unordered_map<k, v> &m) {
  os << "{";
  for (const auto &p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template <typename t> ostream &operator<<(ostream &os, const set<t> &s) {
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

template <typename t>
ostream &operator<<(ostream &os, const unordered_set<t> &s) {
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

void debug_out() { cerr << endl; }

template <typename head, typename... tail> void debug_out(head h, tail... t) {
  cerr << h << '\n';
  debug_out(t...);
}

#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):\n", debug_out(__VA_ARGS__)
