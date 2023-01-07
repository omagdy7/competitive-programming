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
    s = regex_replace(s, regex("party"), "pawri");
    cout << s << endl;
	}

}
