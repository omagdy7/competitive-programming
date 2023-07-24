#include<bits/stdc++.h>
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
  int n, c;
  cin >> n >> c;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> s(n), e(n);
  multiset<int> ms;
  for (int i = 0; i < n; i++) {
    s[i] = a[i] + i + 1;
    e[i] = a[i] + n - i;
    ms.insert(s[i]);
  }
  vector<pair<int, int>> x(n);
  for (int  i = 0; i < n; i++) {
    if (s[i] <= e[i]) {
      x[i] = {s[i], -s[i]};
    } else {
      x[i] = {e[i], s[i]};
    }
  }
  sort(x.begin(), x.end());
  int ans = 0;
  bool found = false;
  while (ans < n && c - x[ans].first >= 0) {
    c -= x[ans].first;
    ms.erase(ms.find(abs(x[ans].second)));
    if (x[ans].second < 0) {
      found = true;
    }
    ans += 1;
  }
  if (found) {
    cout << ans << '\n';
  } else {
    while (*ms.begin() > c && ans >= 0) {
      c += x[ans - 1].first;
      ms.insert(abs(x[ans - 1].second));
      ans -= 1;
    }
    cout << ans + 1 << '\n';
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

