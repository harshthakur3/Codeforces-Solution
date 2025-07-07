//Accept hoja bkl
#include <bits/stdc++.h>
using namespace std;
void space(int n, int k, const string &s) {
    int lagatar_zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            lagatar_zero++;
            if(lagatar_zero >= k){
                cout << "Bob" << endl;
                return;
            }
        }
        else{
            lagatar_zero = 0;
        }
    }
    cout << "Alice" << endl;
    return;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int zero = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zero++;
        }
        int o = n - zero;
        if(o <= k){
            cout << "Alice" << endl;
        }
        else if(2*k <= n){
            cout << "Bob" << endl;
        }
        else{
            space(n, k, s);
        }
    }
    return 0;
}
