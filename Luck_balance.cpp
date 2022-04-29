#include<bits/stdc++.h>
using namespace std;
bool comparePair(pair<int, int> p1, pair<int, int> p2){
  if(p1.second >= p2.second && p1.first > p2.first){
    return true;
  }
  else {
  return false;
  }
}

int main() {
  int n, k, sum = 0, cn=0;
  cin >> n >> k;
  vector<pair<int, int>> vp(n);
  for(auto &x : vp){
    cin >> x.first >> x.second;
  }
  sort(vp.begin(), vp.end(), comparePair);
  cout << "-----------------------------------";
  cout << endl;
  for(auto x : vp){
    cout << x.first << " " << x.second << endl;
  }
  for(int i = 0; i < n; i++){
    if(vp[i].second == 1){
      cn++;
    }
    if(cn != k - 1){
      cout << "vp[" << i << "]" << vp[i].first << endl;
      sum+=vp[i].first;
    }
  }
  sum -= vp[cn].first;
  cout << sum << endl;
  return 0;
}
