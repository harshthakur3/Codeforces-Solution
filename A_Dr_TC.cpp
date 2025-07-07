#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                one++;
            }
        }
        //cout << one << endl;
        int ans = one*(one - 1) + (n - one)*(one + 1);
        cout << ans << endl;
    }
}