#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int key, a, b, c;
    cin >> key >> a >> b >> c;
    int behindDoors[3] = {a, b, c};
    int ans = 1;
    while(behindDoors[key - 1]) {
      cerr << behindDoors[key - 1] << endl;
      key = behindDoors[key - 1];
      ans++;
    }
    cerr << endl;
    cout << ((ans == 3) ? "YES" : "NO") << endl;
	}
}
