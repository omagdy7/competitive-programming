#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    int ans = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;
    for(int i = n - 1; i > 0; i--) {
      while(v[i] <= v[i-1] && v[i - 1] > 0) {
        v[i-1] = v[i-1] / 2;
        ans++;
      }
      if(v[i] == v[i-1]) {
        ans = -1;
        break;
      }
    }
    cout << ans << endl;
  }
}
