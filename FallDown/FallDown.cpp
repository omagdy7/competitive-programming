#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int r, c;
    cin >> r >> c;
    vector<string> grid(r);
    for(auto &s : grid) {
      cin >> s;
    }
    for(int i = grid.size() - 2; i >= 0; i--) {
      for(int j = 0; j < grid[i].size(); j++) {
        int t = i;
        if(grid[i][j] == '*'){
          while(t < r - 1 && grid[t+1][j] == '.'){
            grid[t+1][j] = '*';
            grid[t][j] = '.';
            t++;
          }
        }
      }
    }
      for(auto s : grid) {
        cout << s << endl;
      }
    }
  }
  
  





