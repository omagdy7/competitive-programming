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
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
      if(s[i + 1] == s[i]) {
        s[i] = s[i + 1] - '0';
        ans++;
      }
    }
    cout << ans << endl;
	}
}
