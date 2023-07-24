#include <bits/stdc++.h>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define INF 1000000000

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int mx = 0;
  int n;
  cin >> n;
  vi v(n);
  int x, y;
  cin >> x >> y;
  v[0] = y;
  for (int i = 0; i < n - 1; ++i) {
    int x, y;
    cin >> x >> y;
    v[i + 1] = v[i] + (y - x);
  }
  cout << *max_element(v.begin(), v.end()) << '\n';
}
