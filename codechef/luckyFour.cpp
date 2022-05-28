#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int count = 0;
    int x;
    cin >> x;
    while (x) {
      int foo = x % 10;
      if(foo == 4) count++;
      x /= 10;
    }
    cout << count << endl;
  }
}

