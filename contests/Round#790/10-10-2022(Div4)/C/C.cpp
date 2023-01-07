#include<bits/stdc++.h>

using namespace std;

int main () {
  int tt;
  cin >> tt;
  while(tt--) {
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    vector<int> ans;
    for(auto &s : v) {
      cin >> s;
    }
    for(int i = 0; i < v.size() - 1;i++) {
      for(int j = i + 1;j < v.size();j++){
        int sum = 0;
        for(int k = 0; k < v[i].size(); k++) {
          sum+=abs(v[i][k] - v[j][k]);
        }
        ans.push_back(sum);
      }
    }
    cout << *min_element(ans.begin(), ans.end()) << endl;
  }

}
