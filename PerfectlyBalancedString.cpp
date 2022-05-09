#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  string s;
  while(tt--){
    cin >> s;
    bool ok = true;
    do{
      cout << s << endl;
      map<char, int> mp;
      for(auto ch : s) {
        mp[ch]++;
      }
      int mx = 1;
      int mn = 1;
      for(auto x : mp){
        mx = max(mx, x.second);
        mn = min(mn, x.second);
        // cout << x.first << " " << x.second << endl;
      }
      if(mx - mn > 1) {
        ok = false;
        break;
      }
    } while(next_permutation(s.begin(), s.end()));
    cout << (ok ? "YES" : "NO");
    cout << endl;
  }
}

