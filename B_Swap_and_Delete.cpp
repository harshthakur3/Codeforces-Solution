#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int o = 0;
        int z = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '1') o++;
            else z++;
        }
        int i;
        for(i = 0; i < s.size() ; i++){
            if(s[i] == '1'){
                if(z > 0) z--;
                else break;
            }
            else{
                if(o > 0) o--;
                else break;
            }
        }
        
        cout << s.size() - i << endl;
           
    }
}