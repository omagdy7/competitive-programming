#include<bits/stdc++.h>

using namespace std;

int main() { 
  int tt;
  cin >> tt;
  while(tt--) {
    vector<int> v(2);
    for(int &x: v){
      cin >> x;
    }
    int i = 0;
    while(true) {
      int z = v[1] / v[0];
      i++;
      if(v[1] < v[0] || v[1] % v[0] != 0) {
        cout << 0 << " " << 0 << '\n';
        break;
      }
      bool l = int(pow(z, 1.0/i)) == pow(z, 1.0/i);
      if(l) {
        cout << i << " " << pow(z, 1.0 / i) << '\n';
        break;
      }
    }
  }


  return 0;
}
