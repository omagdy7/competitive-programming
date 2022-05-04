#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  string vowels = "aeiouy";
  set<char> st(vowels.begin(), vowels.end());
  string ans = "";
  for (char ch : s) {
    if (!st.count(tolower(ch))) {
      ans += "." + string(1, tolower(ch));
    }
  }
  cout << ans << '\n';
  return 0;
}
