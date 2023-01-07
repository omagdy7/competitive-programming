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
  vi v(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mx = v[0], mn = v[0];
  for (int i = 0; i < n; i++) {
    if (v[i] > mx || v[i] < mn) {
      cerr << v[i] << '\n';
      ans++;
    }
    mx = max(mx, v[i]);
    mn = min(mn, v[i]);
  }
  cout << ans << '\n';
}
