#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int a, b;
    cin >> a >> b;
    cout << min(7 - a, 7 - b) << endl;
	}
}
