#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    string ans = "";
    for(int i = 0; i < n; i++) {
      string pb;
      cin >> pb;
      int f = count(pb.begin(), pb.end(), 'F');
      int p = count(pb.begin(), pb.end(), 'P');
      if(f >= x || f == x - 1 && p >= y) {
        ans.push_back('1');
      } else {
        ans.push_back('0');
      }
    }
    cout << ans << endl;
	}
}
