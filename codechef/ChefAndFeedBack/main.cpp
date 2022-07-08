#include<bits/stdc++.h>


using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
  string str1 = "010";
  string str2 = "101";
	while(tt--){
    string s;
    cin >> s;
    int found1 = s.find(str1);
    int found2 = s.find(str2);
    if(found1 != string::npos || found2 != string::npos) {
      cout << "Good" << endl;
    } else {
      cout << "Bad" << endl;
    }
	}
}
