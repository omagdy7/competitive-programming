#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int w1, w2, x1, x2, m;
    cin >> w1 >> w2 >> x1 >> x2 >> m;
    int weight = w2 - w1;
    if(weight >= x1 * m && weight <= x2 * m) {
      cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
      }

	}
}
