#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int sum = 0;
    int x;
    cin >> x;
    while (x) {
      sum += x % 10;
      x /= 10;
    }
    cout << sum << endl;
  }
}
