#include<bits/stdc++.h>
#include <queue>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  priority_queue<int>pq;
  for(int i = l; i <= r;i++) {
    for(int j = i; j <= r;j++) {
      pq.push(i ^ j);
    }
  }
  cout << pq.top() << '\n';
  return 0;
}
