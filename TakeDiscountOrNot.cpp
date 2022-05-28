#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n, x, y;
    int s1 = x, s2 = 0;
    cin >> n >> x >> y;
    for(int i = 0; i < n; i++) {
      int h;
      cin >> h;
      s2+=h;
      s1+=max(0, h - y);
    }
    cout << (s1 < s2 ? "COUPON" : "NO COUPON") << '\n';
  }
}
