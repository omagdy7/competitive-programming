#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, x;
  cin >> n;
  vector<int> v;
  vector<int> freq(100);
  for(int i = 0; i < n; i ++){
    cin >> x;
    freq[x]+=1;
  }
  for(int i = 0; i < freq.size(); i++){
    for(int j = 0; j < freq[i]; j++){
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}
