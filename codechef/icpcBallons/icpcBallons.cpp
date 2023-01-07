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
    int ans = 0;
    for(int &x : v) cin >> x;
    for(int i = 0; i < v.size(); i++) {
      if(v[i] <= 7) {
        ans = i + 1;
      }
    }
    cout << ans << '\n';
	}
}
