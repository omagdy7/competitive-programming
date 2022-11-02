#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  int n;
  cin >> n;
  if (n >= 4 || n == 1) {
    for(int i = 2; i <= n; i+=2) {
      cout << i << " ";
    }
    for(int i = 1; i <= n; i+=2) {
      cout << i << " ";
    }
  } else {
    cout << "NO SOLUTION" << "\n";
  }
}
