#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
      cin >> x;
    int sum = v[0];
    int fuel = v[0];
    int i = 1;
    while (fuel) {
      fuel += v[i];
      sum += v[i];
      if (i == n - 1)
        break;
      fuel--;
      i++;
    }
    cout << sum << '\n';
  }
}
