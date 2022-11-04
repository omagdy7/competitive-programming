#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string s;
  cin >> s;
  s = regex_replace(s, regex("--"), "2");
  s = regex_replace(s, regex("-\\."), "1");
  s = regex_replace(s, regex("\\."), "0");
  cout << s << endl;
}
