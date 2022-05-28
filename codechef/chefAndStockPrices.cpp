#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int s, a, b, c;
    cin >> s >> a >> b >> c;
    float price = s + (c * s) / 100.0;
    cout << ((price >= a && price <= b) ? "Yes" : "No") << '\n';
  }
}
