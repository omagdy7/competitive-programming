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
    for(int& x : v) cin >> x;
    sort(v.begin(), v.end());
    cout << v[0] + v[1] << endl;
	}
}
