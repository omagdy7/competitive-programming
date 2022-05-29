#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n;
  vector<int> v;
  vector<int> freq(100);
  for(int i = 0; i < n; i ++){
    cin >> x;
    freq[x]+=1;
  }
  for(auto m : freq){
    cout << m << " ";
  }
  cout << endl;
  return 0;
}
