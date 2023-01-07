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
    int sum = (a & 1) + (b & 1) + (c & 1);
    cout << (sum == 1 || sum == 2 ? "YES" : "NO") << endl;
	}
}
