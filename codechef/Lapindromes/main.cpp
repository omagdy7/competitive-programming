#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    string s;
    cin >> s;
    int l = s.size();
    string le, ri;
    if(l & 1) {
      le = s.substr(0, l / 2);
      ri = s.substr((l / 2) + 1, l);
    } else {
      le = s.substr(0, l / 2);
      ri = s.substr(l / 2, l);
    } 
    int ok = 1;
    set<char> st;
    for(int i = 0; i < le.size(); i++) {
      st.insert(le[i]);
    }
    for(auto x : st) {
      int ls = count(le.begin(), le.end(), x);
      int rs = count(ri.begin(), ri.end(), x);
      if(ls != rs) {
        ok = 0;
        break;
      }
    }
    cout << (ok ? "YES" : "NO") << endl;
	}
}
