#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    cin >> n;
    int mx = 0, mn = 1e9;
    while(n--) {
      int x;
      cin >> x;
      mx = max(mx, x);
      mn = min(mn, x);
    }
    cout << mx - mn << endl;
	}
}
