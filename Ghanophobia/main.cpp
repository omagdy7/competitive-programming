#include<bits/stdc++.h>
#include <cstring>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  freopen("ghanophobia.in", "r", stdin);
	int tt;
	cin >> tt;
  int cnt = 0;
	while(tt--){
    cnt++;
    string s;
    cin >> s;
    string s1 = s.substr(0, s.find(":"));
    string s2 = s.substr(s.find(":") + 1, s.length() - 1);
    int eg = stoi(s1) + 1;
    int gh = stoi(s2) + 6;
    cout << "Case " << cnt << ": ";
    if (eg == gh){
      if (gh - 6 > 1) {
        cout << "NO\n";
      } else if (gh - 6 == 1) {
        cout << "PENALTIES\n";
      } else {
        cout << "YES\n";
      }
    } else if(eg > gh) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
