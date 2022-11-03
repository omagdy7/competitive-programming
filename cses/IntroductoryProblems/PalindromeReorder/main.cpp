#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  string s;
  cin >> s;
  map<char, int> mp;
  int e = 0, o = 0;
  for (auto ch : s) {
    mp[ch]++;
  }
  if (n & 1) {
    for (auto [key, value] : mp) {
      if (value & 1) {
        o++;
      } else {
        e++;
      }
    }
    if (o > 1) {
      cout << "NO SOLUTION" << '\n';
    } 
  } else {

  }
}
