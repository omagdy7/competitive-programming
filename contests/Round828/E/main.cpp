#include <bits/stdc++.h>
#include <tuple>

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

auto helper(vi &v) {
  ll ans = 0, zc = 0;
  for (int i = v.size() - 1; i >= 0; i--) {
    (v[i] == 0 ? zc++ : ans += zc);
  }
  return ans;
}

void solve() {
  int n;
  cin >> n;
  vi v(n), v1(n), v2(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  v1 = v;
  v2 = v;
  for (auto &x : v1) {
    if (x == 0) {
      x = 1;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (v2[i] == 1) {
      v2[i] = 0;
      break;
    }
  }
  ll og = helper(v);
  ll l = helper(v1);
  ll r = helper(v2);
  cout << max(og, max(r, l)) << '\n';
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

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */

