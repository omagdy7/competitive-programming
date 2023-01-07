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
    vector<int> pos;
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
      int x;
      cin >> x;
      if (x < i) {
        auto it = lower_bound(pos.begin(), pos.end(), x);
        ans += it - pos.begin();
        pos.emplace_back(i);
      }
    }
    cout << ans << '\n';
	}
}
