#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pi = pair<int, int>;
using vpi = vector<pi>;
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

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

// pretty printing
template <typename K, typename V> void printm(const map<K, V> &mp) {
  cerr << "{" << endl;
  for (auto p : mp) {
    cerr << "  { " << p.first << " : " << p.second << " }\n";
  }
  cerr << "}" << endl;
}
template <typename T> void printv(const vector<T> &v) {
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

template <typename T> void printvv(const vector<vector<T>> &v) {
  cerr << "[\n";
  for (auto &vec : v) {
    cout << "  ";
    printv(vec);
  }
  cerr << "]\n";
}
void print() { cerr << "\n"; }

template <typename T, typename... TS> void print(T val, TS... vals) {
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

bool isValid(vi v, long long ans) {
  long long sum = v[0];
  if (v[0] > ans) {
    return false;
  }
  for (int i = 1; i < v.size(); i++) {
    int cap = (i * ans) - sum;
    sum += v[i];
    if (v[i] > ans && v[i] - ans > cap) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  cin >> n;
  vi v(n);
  for (auto &x : v)
    cin >> x;
  ll lo = 0, hi = INT_MAX;
  while (hi - lo > 1) {
    long long mid = (hi + lo) / 2;
    if (isValid(v, mid)) {
      hi = mid;
    } else {
      lo = mid;
    }
  }
  cout << hi << '\n';
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
