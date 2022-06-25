#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    string s;
    cin >> s;
    int ans = 0, x = 0;
    for (auto ch : s) {
      char c = '0' + (x ^ (ch - '0'));
      ans += (c == '0');
      x ^= (c == '0');
    }
    cout << ans << '\n';
	}
}
