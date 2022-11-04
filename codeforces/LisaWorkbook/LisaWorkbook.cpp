#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  int pg = 1, res = 0;
  for (int i = 0; i < n; i++) {
    int np;
    cin >> np;
    for (int j = 1; j <= np ; j++) {
      if (j == pg) {
        res++;
      }
      if (j % k == 0 && j < np) {
        pg++;
      }
    }
    pg++;
  }
  cout << res << endl;
  return 0;
}
