#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int m, x, y;
    cin >> m >> x >> y;
    vector<int> v(m);
    for(int &x : v) cin >> x;
    set<int> st;
    for(int i = 0; i < v.size(); i++) {
      for(int j = max(v[i] - (x * y) - 1, 0); j < min(v[i] + (x * y), 100); j++) {
        st.insert(j);
      }
    }
    cout << 100 - st.size() << endl;

	}
}
