#include <algorithm>
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

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

int countVallyes(vi &v) {
  int cnt = 0;
  for (int i = 1; i < v.size() - 1; i++) {
    if (v[i] < v[i - 1] && v[i] < v[i + 1]) {
      cnt++;
    }
  }
  return cnt;
}

void solve() {
  int n;
  cin >> n;
  vi v(n + 2);
  v[0] = INT_MAX;
  v[n + 1] = INT_MAX;
  for (int i = 1; i < n + 1; i++) {
    cin >> v[i];
  }
  auto it = unique(all(v));
  vi a = vector<int>(v.begin(), it);
  cout << (countVallyes(a) == 1 ? "YES" : "NO") << '\n';
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
