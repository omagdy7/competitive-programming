#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int l;
    cin >> l;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'A') {
        s[i] = 'T';
      }
      else if(s[i] == 'T') {
        s[i] = 'A';
      }
      else if(s[i] == 'C') {
        s[i] = 'G';
      }
      else if(s[i] == 'G') {
        s[i] = 'C';
      }
    }
    cout << s << endl;
	}
}
