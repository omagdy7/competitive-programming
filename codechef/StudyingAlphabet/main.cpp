#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string s;
  cin >> s;
  int n;
  cin >> n;
  while(n--) {
    string word;
    cin >> word;
    bool ok = 1;
    for(auto ch : word) {
      int found = s.find(ch);
      if(found == string::npos) {
        ok = 0;
        break;
      }
    }
    cout << (ok ? "Yes" : "No") << endl;
  }
}
