#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int s, introLength, numberOfEposides, eposideLength;
    long long ans = 0;
    cin >> s;
    vector<int> seasons(s); // array containg the introLength of each season
    for(auto &x : seasons) {
      cin >> x;
    }
    for(int i = 0 ; i < s; i++) {
      cin >> numberOfEposides;
      for(int j = 0; j < numberOfEposides; j++) {
        int x;
        cin >> x;
        if(j == 0) {
          ans += x;
        }
        if(j > 0) {
          ans += x - seasons[i];
        }
      }
    }
    cout << ans << endl;
	}
}
