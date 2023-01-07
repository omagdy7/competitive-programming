#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int p;
    cin >> p;
    int div = p / 100;
    int rem = p % 100;
    if(div + rem > 10) {
      cout << -1 << endl;
    } else {
      cout << div + rem << endl;
    }
	}
}
