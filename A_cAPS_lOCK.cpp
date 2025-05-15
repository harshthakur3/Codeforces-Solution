#include<bits/stdc++.h>
using namespace std;
void solve(){

    string s;
    cin >> s;
    int a = 0, b = 0;
    if(s[0] > 96) a++;
    else b++;
    for(int i =  1; i < s.size() ; i++){
        if(s[i] < 91)b++;
        else a++;
    }
    if((s[0] > 96 && b == s.size() - 1)){
        if(s[0] >= 97){
        s[0] = s[0] - 32;
        }
        for(int i = 1; i < s.size() ; i++){
            if(s[i] <= 90){
                s[i] = s[i] + 32;
            }
        }
    }
    else if( b == s.size()){
        for(int i = 0; i < s.size() ; i++){
            if(s[i] <= 90){
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s;

}
int main(){

    solve();

}