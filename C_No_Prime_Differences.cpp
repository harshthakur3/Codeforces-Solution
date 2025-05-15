#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        int count = 1;
        for(int i = 1; i < n; i += 2){
            for(int j = 0; j < m; j++){
                v[i][j] = count;
                count++;
            }
        }
        for(int i = 0; i < n; i += 2){
            for(int j = 0; j < m; j++){
                v[i][j] = count;
                count++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}