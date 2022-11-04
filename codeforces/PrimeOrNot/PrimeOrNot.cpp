#include<bits/stdc++.h>
using namespace std;

int main() {
  long long p;
  bool flag = false;
  cin >> p;
  for(long long i = 2; i * i <= p; i++){
    if(p % i == 0) {
      flag = true;
      break;
    }
  }
  if(p == 1) flag = true;
  cout << (flag ? "Not Prime" : "Prime") << endl;
}
