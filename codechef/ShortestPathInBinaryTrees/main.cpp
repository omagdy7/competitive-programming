#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int i, j;
    cin >> i >> j;
    int ans = 0;
    while(i != j) {
      if (j > i) {
        j /= 2;
      } else {
        i /= 2;
      }
      ans++;
    }
    cout << ans << '\n';
	}
}
