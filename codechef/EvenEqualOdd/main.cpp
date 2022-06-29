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
    vector<int> v(n * 2);
    vector<int> even;
    int ev = 0;
    int odd = 0;
    for(int &x : v) {
      cin >> x;
      ev += (x % 2 == 0);
      odd += (x % 2 != 0);
      if(x % 2 == 0) {
        even.push_back(x);
      }
    }
    vector<int> op;
    for(int i = 0; i < even.size(); i++) {
      int count = 1;
      while((even[i] / 2 % 2) != 1) {
        count++;
        even[i] /= 2;
      }
      op.push_back(count);
    }
    sort(op.begin(), op.end());
    if(ev == odd) {
      cout << 0 << endl;
    } else if(ev > odd){
      int ans = 0;
      for(int i = 0; i < (ev - odd) / 2; i++) {
        ans += op[i];
      }
      cout << ans << endl;
    } else {
      cout << abs(ev - odd) / 2 << endl;
    }
	}
}
