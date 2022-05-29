#include<bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    long long x;
    cin >> x;
    vector<long long> v;
    if(x % 2 != 0 || x == 2) {
      cout << "-1" << endl;
      continue;
    }
    cout << ((x + 5) / 6) << " " << x / 4 << endl;
  }
}
