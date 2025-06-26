#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char c = '$';
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] != '?'){
                c = s[i];
            }
            else if(c != '$'){
                s[i] = c;
            }
        }
        c = '$';
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != '?'){
                c = s[i];
            }
            else if(c != '$'){
                s[i] = c;
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '?') count++;
        }
        if(count == n){
            for(int i = 0; i < n; i++){
                cout << 1;
            }
            cout << endl;
        }
        else cout << s << endl;
        
    }
}