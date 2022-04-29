#include<bits/stdc++.h>

using namespace std;

void findMultOcc(vector<int> &indices, string str, char ch){
    for(int i = 0; i < str.length();i++){
        if(str[i] == ch){
            indices.push_back(i);
        }
    }
}

string solve(vector<int> indices){
        for(int i = 0; i < indices.size(); i++)
        {
            if(indices[i] >= 0 && indices[i] % 2 == 0){
                return "YES";
            }
        }
        return "NO";
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        vector<int> indices;
        string word;
        char ch;
        cin >> word;
        cin >> ch;
        findMultOcc(indices, word, ch);
        cout << solve(indices) << '\n';
    }

    return 0;
}
