#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  string s;
  cin >> s;
  map<char, int> mp;
  for(auto ch : s) {
    mp[ch]++;
  }
  int mx = 0;
  for(auto p : mp) {
    mx = max(p.second, mx);
  }
  cout << mx - 1 << endl;
}
