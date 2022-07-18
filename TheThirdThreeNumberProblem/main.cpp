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
    if(n % 2) {
      cout << -1 << endl;
    } else {
      cout << "0" << " " << n / 2 << " " << n / 2 << endl;
    }

	}
}
