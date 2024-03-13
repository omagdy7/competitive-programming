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

int binarySearch(const std::vector<int> &arr, int target) {
  int left = 0;
  int right = arr.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}

int negateNumber(int num) {
  int signMask = 1 << (sizeof(int) * 8 - 1);

  int inverted = ~num & (signMask - 1);

  return inverted + 1;
}

void solve() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distribution(1, INT_MAX);
  int n;
  cin >> n;
  vi v(n);
  for (auto &x : v) {
    cin >> x;
  }
  sort(all(v));
  int ans = 0;
  vector<bool> marked(n, false);
  for (int i = 0; i < n; i++) {
    auto it = binarySearch(v, negateNumber(v[i]) - 1);
    if (it != -1) {
      ans++;
      v[it] = distribution(gen);
      marked[i] = true;
      marked[it] = true;
    }
  }
  int cnt = count(all(marked), false);
  cout << ans + cnt << '\n';
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
