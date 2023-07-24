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
  vi v(n);
  vi start(n), end(n);
  for (auto &x : v) cin >> x;
  for (int i = 0; i < n; i++) {
    start[i] = v[i] + i + 1;
    end[i]   = v[i] + n - i;
  }
  int min_start = *min_element(all(start));
  vi indexes;
  for (int i = 0; i < n; i++) {
    if (start[i] == min_start) {
      indexes.push_back(i);
    }
  }
  int max_end_indx = 0;
  int mx = 0;
  for (int i = 0; i < indexes.size(); i++) {
    if (end[indexes[i]] > mx) {
      max_end_indx = indexes[i];
    }
    mx = max(mx, end[indexes[i]]);
  }
  vi final(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (i == max_end_indx && c - start[i] > 0) {
      c -= start[i];
      ans++;
      final[i] = INT_MAX;
    } else {
      final[i] = min(start[i], end[i]);
    }
  }
  sort(all(final));
  print("c: ", c);
  print("Final: ");
  printv(final);
  print("Start: ");
  printv(start);
  print("End: ");
  printv(end);

  for (int i = 0; i < n; i++) {
    if (c - final[i] >= 0) {
      ans++;
    } else {
      break;
    }
    c -= final[i];
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


