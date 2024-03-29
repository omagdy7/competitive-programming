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

#define ceil(a, b) (a + b - 1 / b)

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

bool isBeautiful(string s) {
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] == s[i + 1]) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n, m;
  cin >> n >> m;
  string t1, t2;
  cin >> t1 >> t2;
  string s1 = t1 + string(rall(t2));
  print(s1);
  int cnt = 0;
  for (int i = 0; i < n + m - 1; i++) {
    if (s1[i] == s1[i + 1]) {
      cnt++;
    }
  }
  cout << (cnt <= 1 ? "YES\n" : "NO\n");
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
