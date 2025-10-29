#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            map<char,int> mp;
            mp['A'] = 0;
            mp['B'] = 0;
            mp['C'] = 0;
            mp['D'] = 0;
            mp[v[i][j]] = 1;
            if(i - 1 >= 0) mp[v[i - 1][j]] = 1;
            if(j - 1 >= 0) mp[v[i][j - 1]] = 1;
            for(auto it : mp){
                if(it.second == 0){
                    v[i][j] = it.first;
                    cout << v[i][j];
                    break;
                }
            }
        }
        cout << endl;
    }

}