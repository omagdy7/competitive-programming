#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> v(5);
  for (int &x : v) {
    cin >> x;
  }
  sort(v.begin(), v.end());
  int sumMin = 0, sumMax = 0;
  for (int i = 0; i < 5; i++) {
    if (v[i] != v[0]) {
      sumMax += v[i];
    }
    if (v[i] != v[4]) {
      sumMin += v[i];
    }
  }
  cout << sumMin << " " << sumMax << endl;
}
