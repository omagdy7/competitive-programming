#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int l, r;
    cin >> l >> r;
    int foo = abs(r - l) + 1;
    cout << (l == r ? 1 : (foo * (foo + 1)) / 2) << '\n';
  }
}
