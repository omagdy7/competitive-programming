#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> v(n);
  vector<int> res;
  for(auto &x : v){
    cin >> x;
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n - 1; i++){
    // 1 2 3 4 5 6 7
    res.push_back(abs(v[i] - v[i+1]));
  }
  cout << *min_element(res.begin(), res.end()) << endl;
  return 0;
}

