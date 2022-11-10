#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

string buildString(map<int, char> &mp, vi &v) {
  string s = "";
  for (auto x : v) {
    s.push_back(mp[x]);
  }
  return s;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
    int n;
    cin >> n;
    vi v(n);
    for (auto &x : v) cin >> x;
    string s;
    cin >> s;
    map<int, char> mp;
    for (int i = 0; i < n; i++) {
      mp[v[i]] = s[i];
    }
    // cerr << buildString(mp,v) << '\n';
    cout << (s == buildString(mp, v) ? "YES" : "NO") << '\n';
	}
}
