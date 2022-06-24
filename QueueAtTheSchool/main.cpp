#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  string res;
  for(int j = 0; j < t; j++) {
    s = regex_replace(s, regex("BG"), "GB");
  }
  cout << s << endl;
}
