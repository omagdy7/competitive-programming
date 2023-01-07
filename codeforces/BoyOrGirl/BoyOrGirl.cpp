#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    set<char> st;
    for(auto ch : s) {
      st.insert(ch);
    }
    cout << (st.size() % 2 != 0 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
}

