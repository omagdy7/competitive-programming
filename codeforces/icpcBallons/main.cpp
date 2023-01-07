#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto ch : s) {
      mp[ch]++;
    }
    int ans = 0;
    for(auto p : mp) {
      if(p.second >= 2) {
        ans += p.second - 1;
      }
    }
    ans += mp.size() * 2;
    cout << ans << endl;
	}
}
