#include<bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int count = 0;
  cin >> s;
  for(auto ch : s) {
    if(isupper(ch)) {
      count++;
    }
  }
  cout << count + 1 << '\n';
  return 0;
}
