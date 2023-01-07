#include<bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int mx = 0;
  int ans = 0;
  for(int i = 0; i < s.size() - 1; i++) {
    if(s[i] == s[i+1]){
      ans++;
    } else {
      mx = max(ans + 1, mx);
      ans=0;
    }
  }
  mx = max(ans + 1, mx);
  cout << (mx >= 7 ? "YES" : "NO") << endl;
}
