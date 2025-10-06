#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int top = 0, bottom = 0, idk = 0;
    for(int i = 0; i < k; i++){
        if(s[i] == '0') top++;
        else if(s[i] == '1') bottom++;
        else if(s[i] == '2') idk++;
    }
    int tt = n;
    tt = tt - top;
    tt = tt - bottom;
    bool flag = false;
    if(tt <= idk){
        flag = true;
    }
    vector<char> ans(n, '+');
    int i;
    for(i = 0; i < top; i++){
        ans[i] = '-';
    }
    int temp = idk;
    while(temp--){
        ans[i] = '?';
        i++;
    }
    i = n - 1;
    while(bottom--){
        ans[i] = '-';
        i--;
    }
    while(idk--){
        if(ans[i] == '+'){
            ans[i] = '?';
        }
        i--;
    }
    for(int i = 0; i < ans.size() ; i++){
        if(flag == false){
            cout << ans[i];
        }
        else{
            if(ans[i] == '?') cout << '-';
            else cout << ans[i] ;
        }
    }
    cout << endl;

}
}