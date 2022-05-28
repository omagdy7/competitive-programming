#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, s;
    cin >> n >> s;
    cout << n - abs(s - n) << '\n';
	}
}
