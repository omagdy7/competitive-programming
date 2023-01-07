#include <bits/stdc++.h>

using namespace std;

int sum(vector<int> &v, int start, int end) {
  int sum = 0;
  for(int i = start; i < end; i++) {
    sum += v[i];
  }
  return sum;
}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &x : v)
      cin >> x;
    sort(v.begin(), v.end());
    if(n == 1) {
      cout << v[0];
    } else {
      cout << sum(v, k, v.size()) - sum(v, 0, k) << endl;
    }
  }
}
