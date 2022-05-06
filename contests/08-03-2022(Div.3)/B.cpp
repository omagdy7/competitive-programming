#include<bits/stdc++.h>

using namespace std;

int modDiv(int r, int a){
    // law r % a == 0, return r-1 % a + r-1 /a, else return r % a + r /a;
    if(r % a == 0){
        return (r-1) % a + (r-1)/a;
    }
    return r % a + r / a;
}

int main(){
    int tt;
    while(tt--){
        cout << "tt: " << tt;
        int l, r, a;
        cin >> l >> r >> a;
        cout << modDiv(r, a);
    }

    return 0;
}