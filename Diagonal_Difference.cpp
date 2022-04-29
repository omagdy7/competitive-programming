#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v1(n);
  vector<vector<int>> v2;
  for(int i = 0; i < n; i++){
    for(auto &x : v1){
      cin >> x;
      cout << "x: " << x << endl;
    }
    v2.push_back(v1);
  }
  int dg1 = 0, dg2 = 0;
  for(int i = 0; i < n; i++){
    dg1+=v2[i][i];
  }
  for(int i = 0; i < n; i++){
    dg2+=v2[i][n-i-1];
  }
  cout << abs(dg2 - dg1) << endl;
  

  return 0;

}

