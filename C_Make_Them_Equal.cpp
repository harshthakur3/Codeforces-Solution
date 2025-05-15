#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(s[i] != c){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout << 0 << endl;
            return;
        }
        else{
            for(int i = n/2; i < n; i++){
                if(s[i] == c){
                    cout << 1 << endl;
                    cout << i+1 << endl;
                    return;
                }
            }
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
            return;
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}