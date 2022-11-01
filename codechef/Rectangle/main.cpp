#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ((a ^ b ^ c ^ d) == 0 ? "YES" : "NO") << endl;
	}
}
