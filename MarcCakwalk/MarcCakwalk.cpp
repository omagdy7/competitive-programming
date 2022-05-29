#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long sum;
  cin >> n;
  vector<long> v(n);
  for(auto &x : v){
    cin >> x;
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n; i++){
    cout << "v[" << i << "] = " << v[i] << " * " << "2^" << n - i - 1 << endl;
    sum += v[i] * pow(2, n - i - 1);
  }
  cout << sum << endl;
  return 0;
}
