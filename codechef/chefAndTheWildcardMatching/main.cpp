#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    string x;
    string y;
    cin >> x;
    cin >> y;
    bool ok = 1;
    for(int i = 0; i < x.size(); i++) {
      if(x[i] != '?' && y[i] != '?') {
        if(x[i] != y[i]) {
          ok = 0;
        }
      }
    }
    cout << (ok ? "Yes" : "No") << endl;
    
	}
}
