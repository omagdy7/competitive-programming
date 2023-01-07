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

string solve() {
  vi fq1(28), fq2(28);
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  s1 += s2;
  for (auto ch : s1) {
    fq1[ch - 'A']++;
  }
  for (auto ch : s3) {
    fq2[ch - 'A']++;
  }
  for (int i = 0; i < 28; i++) {
    if (fq1[i] != fq2[i]) {
      return "NO";
    }
  }
  return "YES";
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  cout << solve() << '\n';
}

/* stuff you should look for:
  ---------------------------
   * special cases (n=1?)
   * int overflow, array bounds
   * do smth instead of nothing and stay organized
   * WRITE STUFF DOWN
   * DON'T GET STUCK ON ONE APPROACH
 */
