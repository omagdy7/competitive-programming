#include <bits/stdc++.h>

using namespace std;

long long sum(vector<int> v) {
  long long sum = 0;
  for(int i = 0; i < v.size(); i++) {
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
    cout << sum(v) % k << '\n';
  }
}
