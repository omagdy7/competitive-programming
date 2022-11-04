#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> dsz(n);
  for (auto &x : dsz) cin >> x;
  vector<int> asz(m);
  for (auto &x : asz) cin >> x;
  set<int> taken;
  sort(dsz.begin(), dsz.end());
  sort(asz.begin(), asz.end());
  bool mbigger = m > n;
  if (mbigger) {
    for (int i = 0; i < m; i++) {
    }
  }

}
