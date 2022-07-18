#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n, m;
    cin >> n >> m;
    vector<char> v(m, 'B');
    vector<int> a(n);
    set<int> vis;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) {
      int f = a[i] - 1;
      int l = m - a[i];
      if(f <= l && v[f] != 'A') {
        v[f] = 'A';
      } else if(f <= l && v[f] == 'A') {
        v[l] = 'A';
      } else if(l <= f && v[l] != 'A') {
        v[l] = 'A';
      } else if(l <= f && v[l] == 'A') {
        v[f] = 'A';
      }
    }
    for(auto ch : v) {
      cout << ch;
    }
    cout << endl;
	}
}
