#include<bits/stdc++.h> 

using namespace std;

bool isIncreasing(vector<int> v){
  for(int i = 0; i < v.size() - 1; i++) {
    if(v[i] >= v[i+1]) {
      return false;
    }
  }
  return true;
}
int getIndex(vector<int> v){
  int index;
  for(int i = 0; i < v.size(); i++) {
    vector<int> v2(i+1);
    for(int j = 0; j <= i;j++){
      index = j;
      v2[j] = v[j];
    }
    if(!isIncreasing(v2)) {
      return index;
    }
  }
  return -1;
}

int main () {
  int tt, n;
  cin >> tt;
  while(tt--) {
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) {
      cin >> x;
    }
    int idx = getIndex(v);
    vector<int> rem(v.size() - idx);
    if(idx == -1) {
      cout << "0" << endl;
    } else {
      for(int i = 0;i < v.size() - idx; i++) {
        rem[i] = v[idx + i];
      }
    }
  }

}
