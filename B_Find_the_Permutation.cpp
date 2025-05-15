#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> ans(n, 0);
        int p = 0;
        for(int i = 0; i < n; i++){
            p = 0;
            for(int j = 0; j<n; j++){
                if(j<i && a[i][j]=='1') p++;
                else if(j>i && a[i][j]=='0') p++;
            }
            ans[p] = i+1;
        }
        for(int i = 0; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
