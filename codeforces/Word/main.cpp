#include <bits/stdc++.h>
#include <cctype>

using namespace std;

string convertLower(string s) {
  for (auto &ch : s) {
    ch = tolower(ch);
  }
  return s;
}
string convertUpper(string s) {
  for (auto &ch : s) {
    ch = toupper(ch);
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  int l = 0;
  int u = 0;
  for (auto ch : s) {
    if (islower(ch)) {
      l++;
    } else {
      u++;
    }
  }
  cout << (l < u ? convertUpper(s) : convertLower(s));
}
