#include<bits/stdc++.h>
#include <regex>

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
    if(is_sorted(s.begin(), s.end())) {
      cout << "0" << endl;
    } else if (regex_search(s.begin(), s.end(), regex("(10)"))) {
      cout << "2" << endl;
    } else {
      cout << "1" << endl;
    }
	}
}
