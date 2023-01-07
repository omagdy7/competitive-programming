#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  string w = "EQUINOX";
  while (tt--) {
    int n, a, b;
    cin >> n >> a >> b;
    cerr << b << endl;
    long long an = 0, sa = 0;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      if(w.find(s[0]) != string::npos) {
        sa += a;
      } else {
        an += b;
      }
    }
    cerr << an << " " << sa << endl;
    if (an > sa) {
      cout << "ANURADHA" << endl;
    } else if(an < sa) {
      cout << "SARTHAK" << endl;
    } else {
      cout << "DRAW" << endl;
    }
  }
}
