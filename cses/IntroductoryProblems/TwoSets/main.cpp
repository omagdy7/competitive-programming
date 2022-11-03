#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  ll n;
  cin >> n;
  ll sum = (n * (n + 1)) / 2;
  ll s = sum / 2;
  if (sum & 1) {
    cout << "NO" << '\n';
  } else {
    cout << "YES" << '\n';
    vector<bool> a(n + 1);
    for (int i = n; i >= 1; i--) {
      if (s <= i) {
        a[s] = true;
        break;
      }
      s -= i;
      a[i] = true;
    }
    int c1 = count(a.begin() + 1, a.end(), false);
    cout << c1 << '\n';
    for (int i = 1; i <= n; i++) {
      if (a[i] == false) {
        cout << i << ' ';
      }
    }
    cout << '\n' << n - c1 << '\n';
    for (int i = 1; i <= n; i++) {
      if (a[i] == true) {
        cout << i << ' ';
      }
    }
  }
}
