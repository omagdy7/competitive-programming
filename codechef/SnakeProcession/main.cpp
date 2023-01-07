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
    bool ans = regex_match(s, regex("(\\.*H\\.*T\\.*)*|(\\.*)"));
    cout << (ans ? "Valid" : "Invalid") << endl;
	}
}
