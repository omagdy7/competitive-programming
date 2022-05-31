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
    vector<int> v(2);
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v[x % 2]++;
    }
    cout << min(v[0] , v[1]) << '\n';
	}
}
