#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> a(n);
  for(int &x : a) cin >> x;
  int m;
  cin >> m;

  int count = 0;
  for(int i = 0; i < m; i++) {
    int p1, p2;
    cin >> p1 >> p2;
    if(a[i] >= p1 && a[i] <= p2){
      count++;
    }
  }
  cout << count << endl;

}
