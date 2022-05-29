#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int x;
    cin >> x;
    if(x < 100) {
      cout << "Easy" << '\n';
    }
    else if(x >= 100 && x < 200) {
      cout << "Medium" << '\n';
    }
    else if(x >= 200 && x <= 300) {
      cout << "Hard" << '\n';
    }
	}
}
