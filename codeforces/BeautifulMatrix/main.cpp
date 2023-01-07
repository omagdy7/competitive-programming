#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int x;
    pair<int, int> p;
    for(int i = 1; i <= 5; i++) {
      for(int j = 1; j <= 5; j++) {
        cin >> x;
        if(x) {
          p.first = i;
          p.second = j;
        }
      }
    }
    cout << abs(p.first - 3) + abs(p.second - 3);
}
