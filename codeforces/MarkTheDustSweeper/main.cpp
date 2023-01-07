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
    long long ans = 0;
    vector<int> v(n);
    long long sum = 0;
    for (auto &x : v) {
      cin >> x;
      sum += x;
    }
    if(sum != v[n - 1]) {
      int ind;
      for(int i = 0; i < n; i++) {
        if(v[i] != 0) {
          ind = i;
          break;
        }
      }
      for(int i = ind; i < n - 1; i++) {
        if(v[i] == 0) {
          ans += 1;
        } else{
          ans += v[i];
        }
      }
    }
    cout << ans << endl;
	}
}
