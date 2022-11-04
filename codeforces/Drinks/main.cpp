#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  double sum = 0;
  double ans;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  ans = sum / (n * 100) * 100;
  printf("%.12lf\n", ans);
}
