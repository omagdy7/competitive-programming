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

void solve() {
  int n, m;
  cin >> n;
  vi v(n);
  mpii mp;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    mp[v[i]] = i;
  }
  cin >> m;
  vi q(m);
  for (auto &x : q) cin >> x;
  ll ans1 = 0, ans2 = 0;
  for (auto x : q) {
    ans1 += mp[x] + 1;
    ans2 += n - mp[x];
  }
  cout << ans1 << " " << ans2 << '\n';
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
