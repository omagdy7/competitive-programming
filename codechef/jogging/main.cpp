#include<bits/stdc++.h>


using namespace std;

#define MOD 1000000007

long long power(long long b, int p) {
  long long res = 1;
  while(p) {
    if(p % 2) res = (res * b) % MOD;
    b = (b * b) % MOD;
    p /= 2;
  }
  return res;
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int n;
    int x;
    cin >> n >> x;
    long long y = power(2 ,n - 1);
    long long ans = (x * y) % MOD;
    cout << ans << endl;
	}
}
