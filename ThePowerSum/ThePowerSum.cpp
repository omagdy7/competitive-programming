#include<bits/stdc++.h>

using namespace std;

int power(int base, int p){
  if(p == 0) {
    return 1;
  }
  return base * (power(base, p - 1));
}

vector<int> ans;

int powerSum(int x, int n, int lastDigit) {
  if (x == 0) {
    for(int x : ans) {
      cout << x << "^" << n << " + ";
    }
    cout << endl;
    return 1;
  }
  int sum = 0;
  for(int i = lastDigit; x - power(i, n) >= 0; i++) {
    ans.push_back(i);
    sum += powerSum(x - power(i, n), n, i + 1);
    ans.pop_back();
  }
  return sum;
}

int main() {
  int x, n, count = 0;
  cin >> x >> n;
  cout <<  powerSum(x, n, 1) << endl;
  return 0;
}
