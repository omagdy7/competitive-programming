#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    cin >> n;
    n-=1;
    if(n % 5 == 0) {
      cout << (n / 5) * 2 << endl;
    } 
    else{
      if(n % 5 == 1 || n % 5 == 2 || n % 5 == 3) {
        cout << ((n / 5) * 2) + 1 << endl; 
      }
      else if(n % 5 == 4) {
        cout << ((n / 5) * 2) + 2 << endl; 
      }
    }
  }
}
