#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    cin >> n;
    long long att = 0;
    long long def = 0;
    for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if(x <= 500) {
        def += 1000 - x;
      } else {
        att += x;
      }
    }
	}
}
