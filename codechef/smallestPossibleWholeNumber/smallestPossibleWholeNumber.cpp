#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int x, y;
    cin >> x >> y;
    if(y != 0) {
      cout << x % y << '\n';
    } else {
      cout << x << '\n';
    }
	}
}
