#include<bits/stdc++.h>
using namespace std;
bool isEvenOrOdd(vector<int> v) {
  bool even = false;
  bool odd = false;
  for(int x : v) {
    if(x % 2 != 0) {
      even = false;
      break;
    }
    else{
      even = true;
    }
  }
  for(int x : v) {
    if(x % 2 == 0) {
      odd = false;
      break;
    }
    else{
      odd = true;
    }
  }
  return odd || even;
}

int main() {
  int tt;
  cin >> tt;
  while(tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> vEven;
    vector<int> vOdd;
    for(int &x : v) {
      cin >> x;
    }
    bool ok = isEvenOrOdd(v);
    for(int x : v) {
      vEven.push_back(x);
      vOdd.push_back(x);
    }
    for(int i = 0; i < v.size(); i++) {
      if(i % 2 == 0){
        vEven[i]++;
      }
    }
    bool evenOp = isEvenOrOdd(vEven);
    for(int i = 0; i < v.size(); i++) {
      if(i % 2 != 0){
        vOdd[i]++;
      }
    }
    bool oddOp = isEvenOrOdd(vOdd);
    cout << (ok ? "YES" : (evenOp || oddOp ? "YES" : "NO")) << endl;

  }
}
