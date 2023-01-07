#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n = 0;
    cin >> n;
    long long a, b;
    cin  >> a >> b;
    int mx = 0;
    map<int, int> mp;
    for(int i = 0; i < int(pow(2, n));i++) {
      int l = a ^ i;
      int r = b ^ i;
      mx = max(mx, l * r);
      cerr << mx << " " << i << endl;
      mp[mx] = i;
    }
    cout << mp[mx] << endl;
	}
}
