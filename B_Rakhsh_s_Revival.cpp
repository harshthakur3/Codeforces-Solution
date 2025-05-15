#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int ans = 0;
        int curr = 0;
        for(int i = 0; i < n; i++){
            if(s[i]=='0') curr++;
            else curr = 0;
            if(curr==m){
                ans++;
                i+=k-1;
                curr = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}