#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int in;
  cin >> in;
  for(int i = in + 1; i <= 9500; i++) {
    string s = to_string(i);
    set<int> st;
    for(auto ch : s) {
      st.insert(ch - '0');
    }
    if(st.size() == 4) {
      cout << i << endl;
      break;
    } 
  }
}
