#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  int zeros = 0;
  vector<int> ind;
  vector<int> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    int y = v[i];
    if(v[i] == 0) {
      zeros++;
      ind.push_back(i);
    }
    while(y >= 1) {
      int d = y % 10;
      y /= 10;
      if(d == 0) {
        zeros++;
        ind.push_back(i);
        break;
      }
    }
  }
  int diff = 1;
  zeros = zeros * 2;
  cout << min(zeros, n) << endl;
  vector<int> ans;
  for(int i = 0; i < n; i++) {
    if(count(ind.begin(), ind.end(), i)) {
      ans.push_back(v[i]);
    }
  }
  for(int i = 0; i < n; i++){
    if(!count(ind.begin(), ind.end(), i) && diff) {
      ans.push_back(v[i]);
      diff--;
    }
  }
  sort(ans.begin(), ans.end());
  for(auto x : ans) {
    cout << x << " ";
  }
  cout << endl;
}
