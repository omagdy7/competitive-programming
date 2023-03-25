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
#define ceil(a, b) ((a) + (b) - 1) / (b))

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

bool isPrime(int x) {
  if (x == 2) return true;
  for (int i = 2; i * i < x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vi v(n);
  unordered_map<int, int> mp;
  int mx = 0;
  int mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mp[v[i]] = max(i + 1, mp[v[i]]);
    mx = max(mx, v[i]);
    mn = min(mn, v[i]);
  }
  int ans = -1;
  for (int i = mn; i <= mx; i++) {
    for (int j = mn; j <= mx; j++) {
      if (__gcd(i, j) == 1 && (mp[i] != 0 && mp[j] != 0)) {
        ans = max(ans, mp[i] + mp[j]);
      }
    }
  }
  cout << ans << '\n';
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


