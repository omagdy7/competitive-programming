#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(auto &x : v) {
      cin >> x;
    }
    int k = 0;
    while(q--) {
      int x, y;
      cin >> x >> y;
      k += (y - x + 1) % 2;
    }
    cout << accumulate(v.begin(), v.end(), 0) + k << '\n';
	}
}
