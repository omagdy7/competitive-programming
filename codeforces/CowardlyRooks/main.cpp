#include<bits/stdc++.h>

using namespace std;

using ll   = long long;
using pi   = pair<int, int>;
using vpi  = vector<pi>;
using vi   = vector<int>;
using vvi  = vector<vi>;
using vll  = vector<long long>;
using mpii = map<int, int>;
using mpll = map<ll, ll>;
using db   = long double;

#define pb push_back 
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

string solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> v(n, vector<bool>(n, false));
  vpi points;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    points.pb(make_pair(x, y));
  }
  for (auto p : points) {
    v[p.first - 1][p.second - 1] = 1;
    for (auto pp : points) {
      if(pp != p) {
        for (int i = 0; i < n; i++) {
          v[pp.first - 1][i]=1;
          cerr << v[pp.first - 1][i] << endl;
        }
        for (int i = 0; i < n; i++) {
          v[i][pp.second - 1] = 1;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (v[i][j] == 0 && (p.first - 1 == i || p.second - 1 == j))  {
          return "YES";
        }
      }
    }
  }
  return "NO";
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
    cout << solve() << '\n';
	}
}

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */
