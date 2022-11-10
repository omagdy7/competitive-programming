#include<bits/stdc++.h>
 
using namespace std;
 
int main () {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  long long ans = 0;
  map<long long, long long> fq;
  for(int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    ans += fq[x];
    fq[-x]++;
  }
  cout << ans << '\n';
}
