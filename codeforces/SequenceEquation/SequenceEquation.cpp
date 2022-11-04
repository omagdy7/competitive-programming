#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, count = 1;
  cin >> n;
  vector<int> v(n);
  map<int, int> mp;
  for(auto &x : v){
    cin >> x;
    mp[x] = count;
    count++;
  }
  for(auto x : mp){
    auto it = find(v.begin(), v.end(), x.second);
    cout << "value: " << x.first << " Index: " << x.second << endl;
    cout << it - v.begin() + 1<< endl;
  }

  


  return 0;
}
