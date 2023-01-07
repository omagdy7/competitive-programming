#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using pi = pair<int, int>;
using vpi = vector<pi>;
using vi = vector<int>;
using vll = vector<long long>;
using mpii = map<int, int>;
using mpll = map<ll, ll>;
using db = long double;

#define push_back pb
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb lower_bound
#define ub upper_bound

const int MOD = (int)1e9 + 7;
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0};
const int dy[4]{0, 1, 0, -1};

void solve() {
  int n;
  cin >> n;
  string s; cin >> s;
  set<int> st;
  vi v(11);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < i; j++) {
      for (int k = j + 1; k < j - 1; k++) {
        st.insert(s[k]);
        v[s[k] - '0']++;
        if(*max_element(all(v)) <= st.size()) {
          cnt++;
        }
      }
      st.clear();
      v.clear();
    }
  }
  cout << cnt << endl;

}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--) {
    solve();
	}
}

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */
