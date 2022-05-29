#include<bits/stdc++.h>

using namespace std;

int main() {
  int tt,a,b,c,x,y,remX,remY;
  cin >> tt;
  while (tt--) {
    cin >> a >> b >> c >> x >> y;
    if(a > x && b < y) {
      remX = 0;
      remY = y - b;
    }
    else if (a < x && b > y) {
      remX = x - a;
      remY = 0;
    }
    else if (a > x && b > y) {
      remX =0;
      remY =0;
    }
    else {
      remX = x - a;
      remY = y - b;
    }
    if(c == 0) {
      if(a >= x && b >= y) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
    }
    else if(c >= remX + remY) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }

  }
}
