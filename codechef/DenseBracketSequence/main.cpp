#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cls = count(s.begin(), s.end(), ')');
    int opn = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      cls -= (s[i] == ')');
      opn += (s[i] == '(');
      ans = max(ans, min(opn, cls));
    }
    cout << n - ans * 2 << endl;
  }
}
