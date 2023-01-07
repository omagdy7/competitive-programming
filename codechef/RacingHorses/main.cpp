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
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    int mn = 1e9;
    for(int i = 0; i < n - 1; i++) {
      mn = min(mn, abs(v[i] - v[i + 1]));
    }
    cout << mn << endl;
	}
}
