#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt; cin >>tt;
  while(tt--){
    bool even = true, odd = true;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x : v) cin >> x;
    for(int i : v) {
      if(i % 2 != 0) {
        even = false;
      }
    }
    for(int i : v) {
      if(i % 2 == 0) {
        odd = false;
      }
    }
    cout << (!even && !odd ? "Mix" : even ? "Even" : "Odd") << endl;
  }
}
