#include <bits/stdc++.h>

using namespace std;

const int N = 1234567;

int a[12], p[N], e[N];
bool vis[N];

void print(int x) {
  if (x == -1) return;
  print(p[x]);
  printf("%d", e[x]);
}

int main() {
  int n, m;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  sort(a, a + n);
  scanf("%d", &m);
  int cnt = 0;
  queue < pair <int, int> > q;
  q.push(make_pair(-1, 0));
  while (!q.empty()) {
    int u = q.front().first;
    int x = q.front().second;
    q.pop();
    for (int i = 0; i < n; i++) {
      int v = (x * 10 + a[i]) % m;
      if (u == -1 && a[i] == 0) continue;
      if (!vis[v]) {
        vis[v] = true;
        q.push(make_pair(cnt, v));
        e[cnt] = a[i];
        p[cnt++] = u;
      }
      if (v == 0) {
        print(cnt - 1);
        return 0;
      }
    }
  }
  puts("-1");
  return 0;
}

