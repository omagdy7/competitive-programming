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
    int n = to_string(x).length() - 1;
    int xR = 0;
    while (x) {
      int bar = x % 10;
      xR += bar * pow(10, n);
      n--;
      x /= 10;
    }
    cout << xR << endl;
  }
}

