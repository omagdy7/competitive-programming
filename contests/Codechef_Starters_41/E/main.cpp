#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, k;
    cin >> n >> k;
    if(n % 2 != 0 && k == 0){
      cout << "NO" << endl; 
    } else {
      cout << "YES" << endl;
    }
	}
}
