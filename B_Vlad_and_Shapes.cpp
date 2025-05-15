#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s[n];
        int count = 0;
        int c2 = 0;
        int c3 = 0;
        for(int i = 0; i < n; ++i){
            cin >> s[i];
        } 
        for(int i = 0 ; i < n; ++i){
            for(int j = 0; j < n ; ++ j){
                if(s[i][j] == '1'){ count++; c2++; c3 = count;}
            }
            
            count = 0;
        }
        if(c3*c3 == c2) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
        
    }

    return 0;
}
