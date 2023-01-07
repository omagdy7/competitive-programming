#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int u, v, a, s;
    cin >> u >> v >> a >> s;
    float vel = sqrt(u * u - 2 * a * s);
    cout << (vel > v ? "NO" : "YES") << '\n';
	}
}
