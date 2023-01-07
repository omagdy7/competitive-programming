#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        cout << ((((i + 1) / 2 + (j + 1) / 2)) % 2) << " ";
      }
      cout << '\n';
    }
	}
}
