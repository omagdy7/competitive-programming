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
    vector<long long> v(n);
    long long sum = 0;
    for(auto &x : v){
      cin >> x;
      sum += x;
    }
    vector<long long> ans(n);
    for(int i = 0; i < n; i++) {
      ans[i] = v[i] - sum / (n + 1);
    }
    for(auto x : ans) {
      cout << x << " ";
    }
    cout << endl;
	}
}
