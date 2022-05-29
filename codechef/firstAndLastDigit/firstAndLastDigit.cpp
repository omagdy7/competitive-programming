#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int x;
    cin >> x;
    int last = x % 10;
    while (x > 9) {
      x /= 10;
    }
    cout << x + last << endl;
  }
}
