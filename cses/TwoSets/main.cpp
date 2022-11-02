#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  ll n;
  cin >> n;
  ll sum = (n * (n + 1)) / 2;
  ll s = sum / 2;
  set<int> vis;
  vector<int> st2;
  if (sum & 1) {
    cout << "NO" << '\n';
  } else {
    cout << "YES" << '\n';
    for (int i = n; i >= 1; --i) {
      if (s - i > 0) {
        s -= i;
        vis.insert(i);
      } else {
        vis.insert(s);
        s -= i;
        break;
      }
    }
    for (int i = 1; i <= n; ++i) {
      if (!vis.count(i)) {
        st2.push_back(i);
      }
    }
    cout << vis.size() << '\n';
    for (auto x : vis) {
      cout << x << " ";
    }
    cout << '\n';
    cout << st2.size() << '\n';
    for (auto x : st2) {
      cout << x << " ";
    }
    cout << '\n';
  }
}
