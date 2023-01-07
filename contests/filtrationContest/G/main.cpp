#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int l, r, a;
    cin >> l >> r >> a;
    int mx = r / a + r % a;
    int y = r / a * a - 1;
    if (y >= l)  {
      mx = max(mx, y / a + y % a);
    }
    cout << mx << '\n';
	}
}
