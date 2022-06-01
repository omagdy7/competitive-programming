#include <bits/stdc++.h>


using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mx1 = max(a, b);
    int mx2 = max(c, d);
    if (mx1 > mx2) {
      cout << "Q" << endl;
    } else if (mx2 > mx1) {
      cout << "P" << endl;
    } else {
      cout << "TIE" << endl;
    }
  }
}
