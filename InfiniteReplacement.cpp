#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  string s, t;
  while (tt--) {
    cin >> s;
    cin >> t;
    if(t.find('a') != std::string::npos && t.length() > 1) {
      cout << "-1" << endl;
    }
    else if(t.find('a') != std::string::npos && t.length() == 1) {
      cout << "1" << endl;
    }
    else {
      long long ans = pow(2, s.length());
      cout << ans << endl;
    }
  }

  return 0;
}
