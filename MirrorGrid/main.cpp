#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<string> arr(n);
    for (auto &x : arr) {
      cin >> x;
    }
    int count = 0;
    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < (n + 1) / 2; j++) {
        int ch1 = arr[i][j] - '0';
        int ch2 = arr[n - 1 - j][i] - '0';
        int ch3 = arr[n - i - 1][n - 1 - j] - '0';
        int ch4 = arr[j][n - 1 -i] - '0';
        int sum = ch1 + ch2 + ch3 + ch4;
        count += min(4 - sum, sum);
      }
    }
    cout << count << endl;
  }
}
