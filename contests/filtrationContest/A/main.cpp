#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool sus = false;
    for (int i = 0; i < n - 1; i++) {
      if(s[i] == s[i + 1]) {
        s[i] = '.';
      }
    }
    map<int, int> fq;
    for (auto ch : s) {
      fq[ch]++;
    }
    for (auto [key, val] : fq) {
      if (val > 1 && key != '.') {
        sus = true;
        break;
      }
    }
    cout << (!sus ? "YES" : "NO") << '\n';
	}
}
