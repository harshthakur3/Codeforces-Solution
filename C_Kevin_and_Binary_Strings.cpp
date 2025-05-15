#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int one = 0;
        int n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == '1') one++;
        }
        if(one == n){
            cout << 1 << " " << 1 << " " << 1 << " " << n << endl;
        }
        else{
            int in_o = 0, in_z = 0;
            int pos_z = -1;
            for(int i = 0; i < n; i++){
                if(s[i] == '0') break;
                else in_o++;
            }
            
            pos_z = in_o;
            for(int i = pos_z; i < n; i++){
                if(s[i] == '1') break;
                else in_z++;
            }
            cout << 1 << " " << n << " " << 1 << " " << n - min(in_o, in_z) << endl;
        }
    }
}