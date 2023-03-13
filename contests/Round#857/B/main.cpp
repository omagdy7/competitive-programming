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

vi helper(vi &v) {
  vi ret;
  v.pb(2);
  int x = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == 1) {
      x++;
    } else {
      if (x != 0)  {
        ret.pb(x);
      }
      x = 0;
    }
  }
  return ret;
}

// 10 2 3 4
// max(1 + 10 / 2 + 2, 10)
// max(1 + 12 / 2 + 3, 10)
// max(1 + 15 / 2 + 4, 10)
// max(1 + 15 / 2 + 4, 11)

void solve() {
  int n;
  uint32_t x;
  cin >> n;
  vi v(n);
  for (auto &x : v) cin >> x;
  vi tmp = v;
  vi ret = helper(tmp);
  if(ret.size() == 0) {
    cout << 0 << '\n';
    return;
  }
  int pfx = ret[0];
  int ans = ret[0];
  for (int i = 1; i < ret.size(); i++) {
    if (ret[i] == 0) continue;
    ans = max(1 + pfx / 2 + ret[i], ans);
    pfx += ret[i];
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


