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
    unordered_map <int, int> mp;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      mp[x]++;
    }
    bool ok = true;
    for(auto p : mp) {
      cerr << p.first << endl;
    }
    for(auto p : mp) {
      if(p.second % p.first != 0) {
        ok = false;
        break;
      }
    }
    if(ok) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
	}
}
