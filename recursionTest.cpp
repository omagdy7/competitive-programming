#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

string ans;

bool solve(vector<int> v,int idx, int target, int sum, string opts) {
  if(idx == v.size() - 1) {
    if(sum  == target){
      ans = opts;
      return true;
    }
    return false;
  }
  else {
    int nxt = idx + 1;
    bool plus = solve(v, nxt, target, sum + v[nxt],opts + "+");
    bool minus = solve(v, nxt, target, sum - v[nxt], opts + "-");
    bool mult = solve(v, nxt, target, sum * v[nxt], opts + "*");
    bool div = solve(v, nxt, target, sum / v[nxt], opts + "/");
    return plus || minus || mult || div;
  }
  
}

int main() {
  int n, target;
  cin >> n >> target;
  vector<int> v(n);
  string opts = "";
  for(int &x : v) {
    cin >> x;
  }
  sort(v.begin(), v.end());
  do {
    if(solve(v, 0, target, v[0], opts)) {
      for(int i = 0; i < v.size(); i++) {
        if (i == v.size() - 1) {
          cout << v[i];
        }
        else {
          cout << v[i] << " " << ans[i] << " ";
        }
      }
      cout << '\n';
    }
  } while(next_permutation(v.begin(), v.end())); 

  return 0;
}
