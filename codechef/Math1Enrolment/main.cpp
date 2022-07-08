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
    if(m <= n) {
      cout << 0 << endl;
    } else {
      cout << m - n << endl;
    }

	}
}
