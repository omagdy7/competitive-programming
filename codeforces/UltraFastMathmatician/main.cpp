#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1, s2;
  cin >> s1 >> s2;
  string ans = "";
  for (int i = 0; i < s1.size(); i++) {
    ans += ((s1[i] - '0') ^ (s2[i] - '0') + '0');
  }
  cout << ans << endl;
}
