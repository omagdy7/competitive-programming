#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    cin >> n;
    if (n == 1) {
      cout << n << '\n' << 1 << " " << 2 << '\n';
    } else {
      cout << n - 1 << '\n';
      vector<int> v(n);
      int cnt = 0;
      for (int i = 0; cnt != n - 1 && i < n; i++) {
        if((3 * n - 1 - i) % 3 != 0) {
          cerr << (3 * n - 1 - i) << endl;
          v[i] = (3 * n - 1 - i);
          cnt++;
        }
      }
      // cerr << "n - 1 " << n - 1 << endl;
      for (int i = 0; i < n - 1; i++) {
        cout << i * 3  + 1 << " " << v[i] + 1 << endl;
      }
    }
	}
}
