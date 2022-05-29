#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<vector<int>> v(n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      int x;
      cin >> x;
      v[i].push_back(x);
    }
  }
  int x = 0, y = 0, z = 0;
  for(int i = 0; i < n; i++) {
      x+=v[i][0];
      y+=v[i][1];
      z+=v[i][2];
  }
  cout << ((x == 0 && y == 0 && z == 0) ? "YES" : "NO") << endl;

}
