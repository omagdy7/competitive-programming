#include<bits/stdc++.h>

using namespace std;

bool safeMove(int i, int j) {
  if(i < 0 || i > 2 || j < 0 || j > 2) {
    return false;
  }
  return true;
}

vector<vector<int>> sumAdjacents(vector<vector<int>> v) {
  vector<vector<int>> ans(3, vector<int> (3));
  vector<int> dx = {1, 0, -1, 0};
  vector<int> dy = {0, 1, 0, -1};
  for(int i = 0; i < v.size();i++) {
    for(int j = 0; j < v[i].size(); j++) {
      ans[i][j] += v[i][j];
      for(int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if(safeMove(x, y)) {
          ans[i][j] += v[x][y];
        }
      }
      (ans[i][j] & 1) ? ans[i][j] = 0 : ans[i][j] = 1;
    }
  }
  return ans;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  vector<vector<int>> v (3, vector<int> (3));
  for(auto &x : v) {
    for(auto &y : x) {
      cin >> y;
    }
  }
  for(auto x : sumAdjacents(v)) {
    for(auto z : x) {
      cout << z;
    }
    cout << endl;
  }
}
