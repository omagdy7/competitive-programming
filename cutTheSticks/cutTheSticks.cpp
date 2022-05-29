#include<bits/stdc++.h>

using namespace std;

bool vectorZero(vector<int>& v);
int secondSmallest(vector<int>& v);

int main(){
  int vsize;
  int count=0;
  vector<int> vec;
  cin >> vsize;
  vector<int> result;
  for(int i = 0; i < vsize; i++){
    int element;
    cin >> element;
    vec.push_back(element);
  }
  sort(vec.begin(), vec.end());
  int mn = *min_element(vec.begin(), vec.end());
  for(int i = 0; i < vsize; i++){
    if(vec[i] != 0){
      vec[i]-= mn;
    }
  }
  cout << vsize;
  while(!vectorZero(vec)){
    int ss = vec[secondSmallest(vec)];
    count = 0;
    for(int x : vec){
      cout << x << " ";
    }
    cout << endl;
    for(int i = 0; i < vsize; i++){
      if(vec[i] != 0){
          vec[i] -= ss;
          count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}


bool vectorZero(vector<int>& v){
  int count = 0;
  for(int i = 0; i < v.size(); i++){
    if(v[i] == 0){
      count++;
    }
  }
  return count == v.size();
}

int secondSmallest(vector<int>& v){
  for(int i = 0; i < v.size(); i++){
    if(v[i] != *min_element(v.begin(), v.end())){
      return i;
    }
  }
  return -1;
}
