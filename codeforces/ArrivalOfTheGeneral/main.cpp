#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  int mx = 0;
  int mn = 1e9;
  for(int &x : v) {
    cin >> x;
    mx = max(mx, x);
    mn = min(mn, x);
  }
  int imn = n - (find(v.rbegin(), v.rend(), mn) - v.rbegin()) - 1;
  int imx = find(v.begin(), v.end(), mx) - v.begin();
  int x = n - imn - 1;
  if(imx > imn) {
    cout << imx + x - 1 << endl;
  } else {
    cout << imx + x << endl;
  }

}
