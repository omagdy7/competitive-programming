#include<bits/stdc++.h>

using namespace std;

int solve(char c1, char c2, string letters) {
    int c1Pos = letters.find(c1);
    letters.erase(remove(letters.begin(), letters.end(), c1), letters.end());
    int c2Pos = letters.find(c2) + 1;
    return (c1Pos * 25 + c2Pos);
}

int main() {
  string letters = "abcdefghijklmnopqrstuvwxyz";
  int tt;
  cin >> tt;
  while (tt--) {
    char c1, c2;
    cin >> c1 >> c2;
    cout << solve(c1, c2, letters) << endl;
  }
  return 0;
}
