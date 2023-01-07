#include<bits/stdc++.h>

using namespace std;

int main () {
  int tt;
  cin >> tt;
  while(tt--) {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> grid(r, vector<int>(c));
    for(auto &v : grid) {
      for(auto &x : v){
        cin >> x;
      }
    }
    vector<int> res;
    int ans = 0;
    for(int i = 0; i < r; i++) {
      for(int j = 0; j < c; j++) {
        ans += grid[i][j];
        int r1 = i, r2 = i, r3 = i, r4 = i;
        int c1 = j, c2 = j, c3 = j, c4 =j;
        while(r1+1 <= r - 1 && c1 + 1 <= c - 1) {
          r1++;
          c1++;
          ans+= grid[r1][c1];
        }
        while(r2+1 <= r - 1 && c2 - 1 >= 0) {
          r2++;
          c2--;
          ans+= grid[r2][c2];
        }
        while(r3-1 >= 0 && c3 + 1 <= c - 1) {
          r3--;
          c3++;
          ans+= grid[r3][c3];
        }
        while(r4-1 >= 0 && c4 - 1 >= 0) {
          r4--;
          c4--;
          ans+= grid[r4][c4];
          cout << "r4 " << r4 << " c4 " << c4 << endl;
        }
        res.push_back(ans);
        ans = 0;
      }
    }
    cout << *max_element(res.begin(), res.end()) << endl;
  }
}
