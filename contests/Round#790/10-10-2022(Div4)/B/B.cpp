#include<bits/stdc++.h>

using namespace std;

int main () {
  int tt;
  cin >> tt;
  while(tt--) {
    int n, c;
    int ans = 0;
    cin >> n;
    vector<int> v(n);
    for(int &x : v) {
      cin >> x;
    }
    int mn = *min_element(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
      if(v[i] != mn){
        ans += v[i] - mn;
      }
    }
    cout << ans << endl;
  }

}
