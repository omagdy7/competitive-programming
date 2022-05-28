#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, fr, v, fi;
    cin >> n >> fr >> v >> fi;
    cout << (fr + fi >= n && v >= n ? "YES" : "NO") << '\n';
	}
}
