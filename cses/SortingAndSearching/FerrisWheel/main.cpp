#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, x;
  cin >> n >> x;
  vi v(n);
  for (auto &y : v) cin >> y;
  sort(v.begin(), v.end());
  int ans = 0;
  int sum = 0;
  // 1 2
  // 1 1 1 1 1 1
  // 2 3 7 9
  // 2 5 12 21
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (sum >= x || v[i] > sum) {
      sum = 0;
      ans++;
    }
  }
  cout << ans << '\n';
}
