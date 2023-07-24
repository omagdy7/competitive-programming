#include<bits/stdc++.h>
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
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

template<typename K, typename V> ostream& operator<<(ostream& os, const pair<K, V>& p);
template<typename T> ostream& operator<<(ostream& os, const vector<T>& vec);
template<typename K, typename V> ostream& operator<<(ostream& os, const map<K, V>& m);
template<typename K, typename V> ostream& operator<<(ostream& os, const unordered_map<K, V>& m);
template<typename T> ostream& operator<<(ostream& os, const set<T>& s);
template<typename T> ostream& operator<<(ostream& os, const unordered_set<T>& s);

template<typename K, typename V>
ostream& operator<<(ostream& os, const pair<K, V>& p) {
  os << "(" << p.first << ", " << p.second << ")";
  return os;
}

template<typename T>
ostream& operator<<(ostream& os, const vector<T>& vec) {
  os << "{";
  for (size_t i = 0; i < vec.size(); ++i) {
    if (i > 0) os << ", ";
    os << vec[i];
  }
  os << "}";
  return os;
}


template<typename K, typename V>
ostream& operator<<(ostream& os, const map<K, V>& m) {
  os << "{";
  for (const auto& p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template<typename K, typename V>
ostream& operator<<(ostream& os, const unordered_map<K, V>& m) {
  os << "{";
  for (const auto& p : m) {
    os << p.first << ": " << p.second << ", ";
  }
  os << "}";
  return os;
}

template<typename T>
ostream& operator<<(ostream& os, const set<T>& s) {
  int i = 0;
  os << "{";
  for (const auto& e : s) {
    if (i > 0) os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

template<typename T>
ostream& operator<<(ostream& os, const unordered_set<T>& s) {
  int i = 0;
  os << "{";
  for (const auto& e : s) {
    if (i > 0) os << ", ";
    os << e;
    i++;
  }
  os << "}";
  return os;
}

void print() {
  cerr << "\n";
}

template<typename T, typename... TS>
void print(T val, TS... vals) {
  cerr << val << " ";
  print(vals...);
}



/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */

ll mySqrt(ll n) {
  ll l = 1, r = sqrt(n) + 4;
  while (l <= r) {
    ll mid = (l + r) / 2;
    if (mid * mid <= n) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return l - 1;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vi lines(n);
  for (int i = 0; i < n; ++i) {
    cin >> lines[i];
  }
  sort(all(lines));
  for (int i = 0; i < m; ++i) {
    ll a, b, c;
    cin >> a >> b >> c;
    if (c <= 0) {
      cout << "NO\n";
      continue;
    }
    ll ac4 = 4LL * a * c;
    ac4 = mySqrt(ac4);
    if (ac4 * ac4 != 4 * a * c) {
      ac4++;
    }
    ll toFindL = b - ac4;
    ll toFindR = b + ac4;
    int l = ub(all(lines), toFindL) - lines.begin();
    if (l != n) {
      if (lines[l] < toFindR) {
        cout << "YES\n";
        cout << lines[l] << '\n';
      } else {
        cout << "NO\n";
      }
    } else {
      cout << "NO\n";
    }
  }
}

int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while(tt--) {
    solve();
  }
}


