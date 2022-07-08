#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &x : v)
    cin >> x;
  double plus = 0, minus = 0, zero = 0;
  for (int x : v) {
    if (x < 0) {
      minus++;
    } else if (x > 0) {
      plus++;
    } else {
      zero++;
    }
  }
  printf("%.6f\n%.6f\n%.6f\n", plus / n, minus / n, zero / n);
}
