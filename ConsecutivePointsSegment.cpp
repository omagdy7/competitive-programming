#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    int gapSize = 0;
    int gap = 0;
    cin >> n;
    vector<int> v(n);
    for(int& x : v) cin >> x;
    for(int i = 0; i < n - 1; i++) {
      if(v[i+1] - v[i] > 1) {
        gapSize += v[i+1] - v[i];
        gap++;
      }
    }
    if(gap > 2) {
      cout << "NO" << endl;
    } else {
      if(gapSize >= 5 && gap == 2) {
        cout << "NO" << endl;
      } else if(gap == 1 && gapSize >= 4){
        cout << "NO" << endl;
      } else {
        cout << "YES" << endl;
      }
    }
  }
}
