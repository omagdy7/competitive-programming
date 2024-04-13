#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
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
#define make_unique(x)                                                         \
  sort(all((x)));                                                              \
  (x).resize(unique(all((x))) - (x).begin())
#define ceil(a, b) ((a) + (b)-1) / (b)

const int mod = (int)1e9 + 7;
const db pi = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...) 42
#endif

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */

// 3 9 6
// 5 7 1
// 11 4 8

void solve() {
  int n, c, d;
  cin >> n >> c >> d;
  vi v(n * n);
  for (int i = 0; i < n * n; i++) {
    cin >> v[i];
  }
  int mn = *min_element(all(v));
  vi mat(n * n);
  mat[0] = mn;
  for (int i = 1; i < n * n; i++) {
    if (i % n == 0) {
      mat[i] = mat[i - n] + c;
    } else {
      mat[i] = mat[i - 1] + d;
    }
  }
  sort(all(mat));
  sort(all(v));
  for (int i = 0; i < n * n; i++) {
    if (v[i] != mat[i]) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
