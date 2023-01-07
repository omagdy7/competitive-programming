#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int ansZ = 0;
    bool duple = false;
    bool zero = false;
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(auto &x : v) {
      cin >> x;
      if(x == 0) {
        zero = true;
      }
      mp[x]++;
    }
    for(auto &p : mp) {
      if(p.first == 0) {
        ansZ+=p.second;
      }
      if(p.second > 1 && p.first != 0) {
        duple = true;
      }
    }
    if(zero) {
      cout << n - ansZ << endl;
    }
    else if(duple){
      cout << n << endl;
    }
    else {
      cout << n + 1 << endl;
    }
  }
}
