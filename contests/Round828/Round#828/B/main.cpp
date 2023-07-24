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
	int tt;
	cin >> tt;
	while(tt--) {
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    int even = 0, odd = 0;
    long long ans = 0;
    for (int i = 0 ; i < n; i++) {
      cin >> v[i];
      odd += (v[i] & 1);
      ans += v[i]; 
    }
    even = n - odd;
    while (q--) {
      int t, x;
      cin >> t >> x;
      if (t == 0) {
        ans += even * x;
        if (x & 1) {
          odd += even;
          even = 0;
        } 
      } else {
        ans += odd * x;
        if (x & 1) {
          even += odd;
          odd = 0;
        } 
      }
      cout << ans << '\n';
    }
	}
}
