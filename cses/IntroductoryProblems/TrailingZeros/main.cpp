#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 5; n >= i; i *= 5) {
    ans += n / i;
  }
  cout << ans << '\n';
}
