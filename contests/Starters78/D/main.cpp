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
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i].second;
  }
  for (int i = 0; i < n; i++) {
    cin >> p[i].first;
    p[i].first += p[i].second;
  }
  sort(p.begin(), p.end());
  vector<long long> sum(n + 1);
  vector<int> mx(n + 1);
  mx[0] = p[0].second;
  for (int i = 1; i <= n; i++) {
    sum[i] = p[i - 1].first + sum[i - 1];
    mx[i] = max(mx[i - 1], p[i].first - p[i].second);
  }
  printv(sum);
  printv(mx);
  int lo = 0, hi = n + 1;
  while (hi - lo > 1) {
    int mid = (lo + hi) >> 1;
    bool ok = ((sum[mid] - mx[mid - 1]) <= k) && (mid > 1);
    if (!ok) {
      for (int i = mid; i < n; i++) {
        if (sum[mid - 1] + p[i].second <= k) {
          ok = true;
          break;
        }
      }
    }
    if (ok) {
      lo = mid;
    } else {
      hi = mid;
    }
  }
  cout << lo << '\n';
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


