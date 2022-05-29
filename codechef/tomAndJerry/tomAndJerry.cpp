#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int d1 = abs(a - c);
    int d2 = abs(b - d);
    if(d1 + d2 <= k && (k - (d1 + d2)) % 2 == 0) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }

	}
}
