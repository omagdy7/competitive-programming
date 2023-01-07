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
    map<int, int> mp;
    for (int &x : v) {
      cin >> x;
      mp[x]++;
    }
    vector<int> pair;
    set<int> vis;
    int sq = 0;
    sort(v.begin(), v.end());
    for(int i = v.size() - 1; i > 0; i--) {
      int elem = v[i];
      if(mp[elem] >= 4) {
        sq = elem;
      }
      if(mp[elem] >= 2 && !vis.count(elem)) {
        if(pair.size() == 2) {
          break;
        }
        pair.push_back(elem);
        vis.insert(elem);
      }
    }
    if(pair.size() == 2) {
      cout << max(pair[0] * pair[1], sq * sq) << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
