#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        bool flag = 0;
        for(int i = 0; i < n; i++){
            if(i - k < 0 && i + k > n - 1){
                if(s[i] != t[i]){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            if(s != t){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    }
}