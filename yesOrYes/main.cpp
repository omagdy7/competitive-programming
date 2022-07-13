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
    for(auto &c : s){
      c = tolower(c);
    }
    if(s == "yes") {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
	}
}
