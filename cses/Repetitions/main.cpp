#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string s;
  cin >> s;
  int mx = 1;
  int cnt = 1;
  for (int i = 0; i < s.length() - 1; ++i) {
    if(s[i] == s[i + 1]) {
      cnt++;
      mx = max(mx, cnt);
    } else {
        cnt = 1;
    }
  }
  cout << mx << endl;
}
