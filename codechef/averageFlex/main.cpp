#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v)
      cin >> x;
    map<int, int> low;
    map<int, int> high;
    for (int i = 0; i < v.size(); i++) {
      for (int j = 0; j < v.size(); j++) {
        if (v[j] <= v[i]) {
          high[v[i]]++;
        } else {
          low[v[i]]++;
        }
      }
    }
    int count = 0;
    for(int x : v) {
      if(low[x] < high[x]) {
        count++;
      }
    }
    cout << count << endl;
  }
}
