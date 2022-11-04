#include<bits/stdc++.h>

using namespace std;

long long fact(long long mn) {
  long long ans = 1;
  for(int i = 1; i <= mn; i++) {
    ans *= i;
  }
  return ans;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  long long n, m;
  cin >> n >> m;
  cout << fact(min(n, m)) << '\n';
}
