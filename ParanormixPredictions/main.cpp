#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, m;
  cin >> n >> m;
  vector<int> primes;
  for(int i = 2; i <= 50;i++) {
    bool ok = 1;
    for(int j = 2; j * j <= i; j++) {
      if(i % j == 0) {
        ok = 0;
        break;
      }
    }
    if(ok) {
      primes.push_back(i);
    }
  }
  int indx = (upper_bound(primes.begin(), primes.end(), n) - primes.begin());
  (m == primes[indx]) ? cout << "YES" : cout << "NO";
}
