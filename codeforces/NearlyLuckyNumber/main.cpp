#include<bits/stdc++.h>

using namespace std;

bool isLucky(string s) {
  for(int i = 0; i < s.size(); i++) {
    if(s[i] != '4' && s[i] != '7') {
      return false;
    }
  }
  return true;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  long long n;
  cin >> n;
  string s = to_string(n);
  int cnt = 0;
  for(auto ch : s) {
    if(ch == '4' || ch == '7') {
      cnt ++;
    }
  }
  if(isLucky(to_string(cnt))) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
