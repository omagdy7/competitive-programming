#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt; cin >> tt;
  while(tt--) {
    vector<int> v(7);
    for(int &x : v) {
      cin >> x;
    }
    cout << v[0] << " " << v[1] << " " << v[6] - v[1] - v[0] << endl;
  }
}
