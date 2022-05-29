#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, x = 0, k;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> k;
    x ^= k;
  }
  cout << x;
  return 0;
}
