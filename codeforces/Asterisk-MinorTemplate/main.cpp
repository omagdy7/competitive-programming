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
  string s1, s2;
  cin >> s1;
  cin >> s2;
  if (s1[0] == s2[0]) {
    cout << "YES\n";
    cout << s1[0];
    cout << "*\n";
  } else if(s1[s1.length() - 1] == s2[s2.length() - 1]) {
    cout << "YES\n";
    cout << "*";
    cout << s1[s1.length() - 1] << '\n';
  } else {
    int n = s1.length();
    int m = s2.length();
    vector<string> substrs1;
    vector<string> substrs2;
    for (int i = 0; i < s1.length(); i++) {
      substrs1.pb(s1.substr(i, 2));
    }
    for (int i = 0; i < s2.length(); i++) {
      substrs2.pb(s2.substr(i, 2));
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (substrs1[i] == substrs2[j]) {
          string ans = "YES\n*" + substrs1[i] + "*\n";
          cout << ans;
          return;
        }
      }
    }
    cout << "NO\n";
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


