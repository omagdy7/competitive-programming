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

#define push_back pb
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

// v[i + 1] + v[i] = k

void solve() {
  int n, k;
  cin >> n >> k;
  vi v(n);
  for (auto &x : v) cin >> x;
  vi ans(n);
  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    if (v[i] + v[i + 1] < k)  {
      int aw = k - v[i];
      cnt += aw - v[i + 1];
      v[i + 1] = aw;
    }
  }
  cout << cnt << '\n';
  for (auto x : v) {
    cout << x << ' ';
  }
  cout << '\n';

}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  solve();
}

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */
