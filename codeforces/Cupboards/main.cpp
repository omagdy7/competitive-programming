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
  int n;
  cin >> n;
  int l = 0, r = 0;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    l += x;
    r += y;
  }
  // l = 1
  // r = 3
  // max(n - l, n - r)
  int mx = max(n - l, n - r);
  if (mx == n - l) {
    cout << l + n - r << '\n';
  } else {
    cout << r + n - r << '\n';
  }
}
