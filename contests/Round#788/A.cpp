#include<bits/stdc++.h>

using namespace std;

string solve(vector<int> v) {
  int p = 0;
  int n = 0;
  for(int i = 0; i < v.size(); i++) {
    if(v[i] > 0) {
      p++;
    }
    else{
      n++;
    }
  }
  int loop = min(p, n);
  int loop1 = loop;
  for(int i = 0; i < v.size(); i++) {
    if(v[i] > 0 && loop != 0) {
      v[i] = -v[i];
      loop--;
    }
  }
  loop = min(p, n);
  for(int i = v.size() - 1; i > 0; i--) {
    if(v[i] < 0 && loop1 != 0) {
      v[i] = -v[i];
      loop1--;
    }
  }
  if(is_sorted(v.begin(), v.end())) {
    return "YES";
  }
  return "NO";
}


int main () {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v) {
      cin >> x;
    }
    cout << solve(v) << endl;
  }
}
