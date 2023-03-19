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

// #define ceil(a, b) (a + b - 1 / b)

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

//pretty printing
template<typename K, typename V>
void printm(const map<K, V> &mp) {
  cerr << "{" << endl;
  for (auto p : mp) {
    cerr << "  { " << p.first << " : " << p.second << " }\n";
  }
  cerr << "}" << endl;
}
template<typename T>
void printv(const vector<T> &v) {
  cerr << "[";
  for (int i = 0; i < v.size(); i++) {
    if (i == v.size() - 1) {
      cerr << v[i];
    } else {
      cerr << v[i] << ", ";
    }
  }
  cerr << "]\n";
}

template<typename T>
void printvv(const vector<vector<T>> &v) {
  cerr << "[\n";
  for (auto &vec : v) {
    cout << "  ";
    printv(vec);
  }
  cerr << "]\n";
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


void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (auto &x : v) cin >> x;
  auto isEqual = [&](vi &a) {
    return count(all(a), a[0]) == a.size();
  };

  int ans = 0;
  vector<pii> p;
  while (!isEqual(v)) {
    if (ans > n * 30) {cout << -1 << '\n'; return;};
    auto imx = max_element(all(v)) - v.begin();
    auto imn = min_element(all(v)) - v.begin();
    int mx = *max_element(all(v));
    int mn = *min_element(all(v));
    p.push_back({imx + 1, imn + 1});
    v[imx] = ceil((double)mx / mn);
    ans++;
  }
  cout << ans << '\n';
  for (int i = 0; i < ans; i++) {
    cout << p[i].first << ' ' << p[i].second << '\n';
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


