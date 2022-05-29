#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, c, m, rem=0, wrap, result, tt, choc;
  cin >> tt;
  while(tt--){
    cin >> n >> c >> m;
    rem = 0;
    choc = n / c;
    rem += n % c;
    result = choc;
    wrap = choc;
    while(wrap >= m){
      wrap = wrap / m;
      result += wrap;
      rem += wrap % m;
    }
    rem += wrap % m;
    result += rem / m;
    cout << result << endl;
  }
}





















