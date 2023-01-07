#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int s, x, y, z;
    cin >> s >> x >> y >> z;
    int xy = x + y;
    int free = s - xy;
    int count = 0;
    int mx = max(x, y);
    // 3 <= 7
    if (z <= free) {
      cout << 0 << endl;
    } else {
      while (z > free) {
        z -= max(x, y);
        if (x > y) {
          x = 0;
        } else {
          y = 0;
        }
        count++;
      }
      cout << count << endl;
    }
  }
}
