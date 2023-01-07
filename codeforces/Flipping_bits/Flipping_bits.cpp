#include<bits/stdc++.h>


using namespace std;

int main(){
  int n, x=pow(2, 31) - 1;
  cin >> n;
  cout << n ^ x;
  // 0 0 -> 1 -> 0
  // 1 1 -> 0 -> 1
  // 1 1 -> 0 -> 1
  // 1 1 -> 0 -> 0

  return 0;
}
