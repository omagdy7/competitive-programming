#include <bits/stdc++.h>

using namespace std;

vector<int> coins = {1, 3, 4};
#define INF 1e9

int solve(int x) {
  static map<int, int> cache;
  if (x < 0)
    return INF;
  if (x == 0) {
    cache[0] = 0;
    return 0;
  }
  if (cache.count(x)) {
    return cache[x];
  }
  int best = INF;
  for (auto c : coins) {
    best = min(best, solve(x - c) + 1);
  }
  cache[x] = best;
  return best;
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << '\n';
}
