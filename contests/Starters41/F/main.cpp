#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    long long n, k;
    cin >> n >> k;
    if (k == 1) {
      cout << ((n % 2 == 0) ? "EVEN" : "ODD") << endl;
    } else if(k == 2) {
      cout << "ODD" << endl;
    } else {
      cout << "EVEN" << endl;
    }
  }
}
