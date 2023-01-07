#include<bits/stdc++.h>

using namespace std;

int main(){
  int tt, n, count;
  cin >> tt;
  while(tt--){
    string str;
    cin >> n;
    count = 0;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
      cin >> v[i];
    }
    for(int i = 0; i < v.size(); i++){
      for(int j = i+1; j < v.size()-1; j++){
        if(v[i][0] != v[j][0] || v[i][1] != v[j][1]){
          count++;
        }
      }
    }
    cout << count << endl;
  }
}
