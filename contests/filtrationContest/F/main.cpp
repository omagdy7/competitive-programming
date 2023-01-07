#include<bits/stdc++.h>
#include <utility>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  string home, away;
  cin >> home >> away;
  int n;
  cin >> n;
// (home/away, tshirtnum) -> (minute, card)
  map<pair<char, int>, pair<int, char>> mp;
  while(n--) {
    int m;
    cin >> m;
    char ch;
    cin >> ch;
    int tn;
    cin >> tn;
    char card;
    cin >> card;
    mp[make_pair(ch, tn)] = make_pair(m, card);
  }
}
