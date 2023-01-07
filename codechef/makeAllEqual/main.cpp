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
    vector<int> v(n);
    map<int, int> mp;
    for(int &x : v) cin >> x;
    for(int i = 0; i < n; i++) {
      mp[v[i]]++;
    }
    int mx = 0;
    for(auto p : mp) {
      mx = max(p.second, mx);
    }
    cout << n - mx << endl;
  }
}
