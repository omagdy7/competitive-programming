#include<bits/stdc++.h>

using namespace std;

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt;
	cin >> tt;
	while(tt--){
    int a, b, a1, b1, a2, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    int sum1 = a + b;
    int diff1 = abs(a - b);
    int sum2 = a1 + b1;
    int diff2 = abs(a1 - b1);
    int sum3 = a2 + b2;
    int diff3 = abs(a2 - b2);
    if(sum1 == sum2 && diff1 == diff2) {
      cout << 1 << '\n';
    }
    else if(sum1 == sum3 && diff1 == diff3) {
      cout << 2 << '\n';
    }
    else {
      cout << 0 << '\n';
    }
	}
}
