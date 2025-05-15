#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int o = 0, z = 0, fo = 0, fz = 0, o1 = 0, z1 = 0;
        int oi = -1, zi = -1;
        string s;
        cin >> s;
        
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == '0' && s[i - 1] == '0'){
                zi = i;
                break;
            }
        }
        int j = 0;
        for( j = 0; j < s.size(); j++){
            if(s[j] == '1' && s[j + 1] == '1'){
                oi = j;
                break;
            }
        }
        if(oi == -1 || zi == -1){
            cout << "YES" << endl;
        }
        else {
            if(zi > oi){
                cout << "NO" << endl;
            }
            else cout << "YES" << endl;
        }
        
        
        
    }

    
}
