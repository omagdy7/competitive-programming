#include<bits/stdc++.h>
using namespace std;
bool isIncreasing(vector<int> v) {
  for(int i = 0; i < v.size() - 1; i++) {
    if(v[i+1] < v[i]) {
      return false;
    }
  }
  return true;
}


int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    cout << (isIncreasing(v) ? "YES" : "NO") << '\n';
  }
}
