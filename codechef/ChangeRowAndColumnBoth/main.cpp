#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int sx, sy, ex, ey;
    cin >> sx >> sy >> ex >> ey;
    if(sx != ex && sy != ey) {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
	}
}
