#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n; cin >> n;
    string s; cin >> s;
    int sp; cin >> sp;
    map<char, bool> mp;
    for(int i = 0; i < sp; i++) {
      char inn;
      cin >> inn;
      mp[inn] = 1;
    }
    int mx = 0, c = 0;
    for(auto ch : s) {
      if(mp[ch]) {
        mx = max(c, mx);
        c = 1;
      }
      else {
        c++;
      }
    }
    cout << mx << endl;
  }
}
