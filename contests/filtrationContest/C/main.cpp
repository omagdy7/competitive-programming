#include<bits/stdc++.h>

using namespace std;

int64_t fq[22];

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  long long n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int64_t x;
    cin >> x;
    fq[10 + x]++;
  }
  int64_t ans = 0;
  for (int i = 1;i <= 10; i++) {
    ans += fq[10 - i] * fq[10 + i];
  }
  ans += fq[10] * (fq[10] - 1) / 2;
  cout << ans;
}
