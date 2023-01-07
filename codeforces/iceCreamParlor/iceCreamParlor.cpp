#include<bits/stdc++.h>

using namespace std;

bool cleanVec(vector<int> v){
  sort(v.begin(), v.end());
  for(int i = 0; i < v.size() - 1; i++) {
    if(v[i] == v[i + 1]) {
      return true;
    }
  }
  return false;
}

int main() {
  int t,m,n;
  cin >> t;
  while(t--) {
    cin >> m;
    cin >> n;
    vector<int> v(n);
    for(int &x : v) {
      cin >> x;
    }
    for(int i = 1; i <= n; i++) {
      auto it = find(v.begin() + i, v.end(), m - v[i - 1]);
      if(it != v.end() && cleanVec(v)) {
        cout  << v.end() - it - i - 1 << " " << it - v.begin() + i << '\n';
        break;
      }
      else {
        cout  << v.end() - it - i << " " << it - v.begin() + i << '\n';
        break;
      }
    }
  }
  return 0;
}
