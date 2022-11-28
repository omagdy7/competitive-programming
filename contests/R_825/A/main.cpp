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

bool isSame(const vi &v1, const vi &v2) {
  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i]) {
      return false;
    }
  }
  return true;
}

bool isEqual(vi &v1, vi &v2) {
  int o1 = 0, o2 = 0;
  for (int i = 0; i < v1.size(); i++) {
    o1 += v1[i];
    o2 += v2[i];
  }
  return o1 == o2;
}

int getIndexZrs(vi &v1, vi &v2) {
  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i] && v1[i] == 0) {
      return i;
    }
  }
  return -1;
}

int getIndexOnes(vi &v1, vi &v2) {
  for (int i = 0; i < v1.size(); i++) {
    if (v1[i] != v2[i] && v1[i] == 1) {
      return i;
    }
  }
  return -1;
}

int getOnes(vi &v) {
  int ones = 0;
  for (auto x : v) {
    ones += x;
  }
  return ones;
}

void solve() {
  int n;
  cin >> n;
  vi v1(n), v2(n);
  for (auto &x : v1) cin >> x;
  for (auto &x : v2) cin >> x;
  int o1 = getOnes(v1);
  int o2 = getOnes(v2);
  if (isSame(v1, v2)) {
    cout << 0 << '\n';
  } else if(isEqual(v1, v2) && !isSame(v1, v2)) {
    cout << 1 << '\n';
  } else if(o1 > o2) {
    while(!isEqual(v1, v2)) {
      v2[getIndexOnes(v1, v2)] = 1;
    }
    if (isSame(v1, v2)) {
      cout << o1 - o2 << '\n';
    } else {
      cout << o1 - o2 + 1 << '\n';
    }
  } else if (o2 > o1) {
    while(!isEqual(v1, v2)) {
      v1[getIndexZrs(v1, v2)] = 1;
    }
    if (isSame(v1, v2)) {
      cout << o2 - o1 << '\n';
    } else {
      cout << o2 - o1 + 1 << '\n';
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


