#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    stack<char> st;
    st.push(s[0]);
    for(int i = 1; i < n; i++) {
      if(s[i] == '(') {
        st.push('(');
      }
      if(s[i] == ')') {
        if(st.top() == '(' && !st.empty()){
          st.pop();
          count++;
        }
      }
    }
    cout << count << endl;
  }
}


