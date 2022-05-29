#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b + c == 180 ? "YES" : "NO") << '\n';
	}
}
