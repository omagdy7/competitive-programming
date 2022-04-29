#include<bits/stdc++.h>

using namespace std;

auto solve(map<int, int> m){
  for(auto x : m){
    if(x.second >= 3){
      return x.first;
    }
  }
  return -1;
}

int main(){
  int tt, x, n;
  cin >> tt;
  while(tt--){
    map<int, int> frq;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> x;
      frq[x]++;
    }
    // for(auto &x : frq){
    //   v.push_back(x.second);
    // }
    cout << solve(frq) << endl;
  }
}
