#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, x;
  cin >> n;
  map<int, int> mp;
  vector<int> freq;
  for(int i =0; i < n; i++){
    cin >> x;
    mp[x]++;
  }
  for(auto x : mp){
    freq.push_back(x.second);
  }
  cout << n - *max_element(freq.begin(), freq.end()) << '\n';
  return 0;
}
