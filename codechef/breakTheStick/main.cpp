#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, x;
    cin >> n >> x;
    if(n & 1 && x & 1) {
      cout << "YES" << endl;
    } else if(n & 1 && !(x & 1)){
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
	}
}


