#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int a[n][m];
        vector<int> row(n, 0), col(m, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                row[i] += a[i][j];
                col[j] += a[i][j];
            }
        }
        int l = 0, r = 0;
        for(int i = 0; i < s.size(); i++){
                if(s[i] == 'R'){
                int temp = -col[r];
                a[l][r] = temp;
                col[r] = temp + a[l][r];
                row[l] += temp;
                r++;
            }
            else{
                int temp = -row[l];
                a[l][r] = temp;
                row[l] = temp + a[l][r];
                col[r] += temp;
                l++;
            }
        }
        a[n-1][m-1] = -row[n-1];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
}