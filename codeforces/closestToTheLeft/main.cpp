#include <bits/stdc++.h>

using namespace std;

int bs(vector<int> &a, int toFind) {
  int low = -1;
  int high = a.size();
  int mid = (high + low) / 2;
  while (low + 1 < high) {
    if (a[mid] <= toFind) {
      low = mid;
    } else { 
      high = mid;
    }
    mid = (high + low) / 2;
  }
  return low;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;

  vector<int> a(n);
  vector<int> q(n);

  for (int &x : a)
    cin >> x;
  for (int i = 0; i < k; i++) {
    int y;
    cin >> y;
    cout << bs(a, y) + 1 << endl;
  }
}
