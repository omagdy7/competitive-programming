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
    string s;
    cin >> s;
    long long x = count(s.begin(), s.end(), '1');
    cout << (x * (x+1)) /2 << endl;
  }
}
