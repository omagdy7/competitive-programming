#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    vector<int> v(3);
    for(int &x : v) cin >> x;
    sort(v.begin(), v.end());
    cout << v[1] + v[2] << '\n';
	}
}
