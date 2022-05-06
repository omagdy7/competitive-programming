#include<bits/stdc++.h>
using namespace std;
int main () {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) {
      cin >> x;
    }
    int l = 0, r = v.size() - 1;
    while(r > l) {
      while(v[l] < 0) {
        l++;
      }
      while(v[r] > 0) {
        r--;
      }
      if(l > r) break;
      v[l] = -v[l];
      v[r] = -v[r];
    }
    cout << (is_sorted(v.begin(), v.end()) ? "YES" : "NO");
  }
}


