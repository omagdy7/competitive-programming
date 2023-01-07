#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  unordered_set<int> st;
  vector<int> v(n);
  for (auto &x : v) cin >> x;
  sort(v.begin(), v.end());
  for(auto x : v) {
    if(!st.count(x / k)) {
      st.insert(x);
    }
  }
  cout << st.size() << endl;
}
