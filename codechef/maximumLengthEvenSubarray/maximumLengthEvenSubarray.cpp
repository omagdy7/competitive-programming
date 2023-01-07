#include<bits/stdc++.h>

using namespace std;

int sum(int x) {
  int res = 0;
  for(int i = 1; i <= x; i++) {
    res+=i;
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
    cin >> n;
    if(sum(n) % 2 == 0) {
      cout << n << '\n';
    } else {
      cout << n - 1 << '\n';
    }
	}
}
