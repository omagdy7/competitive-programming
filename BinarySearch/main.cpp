#include <bits/stdc++.h>

using namespace std;

bool bs(vector<int> &a, int toFind) {
  int low = 0;
  int high = a.size() - 1;
  int mid = (high + low) / 2;
  while (low <= high) {
    if (a[mid] == toFind) {
      return true;
    } else if (a[mid] > toFind) {
      high = mid - 1;
    } else if(a[mid] < toFind){
      low = mid + 1;
    }
    mid = (high + low) / 2;
  }
  return false;
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
    cout << (bs(a, y) ? "YES" : "NO") << endl;
  }
}
