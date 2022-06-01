#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int x, y;
    cin >> x >> y;
    if(x > y) {
      if((x - y) % 2 == 0) {
        cout << (x - y) / 2  << endl;
      } else {
        cout << (x - y) / 2 + 2 << endl;
      }
    } else if (y > x) {
      cout << y - x << endl;
    } else {
      cout << 0 << endl;
    }
	}
}
