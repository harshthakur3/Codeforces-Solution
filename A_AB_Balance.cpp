#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0, b = 0;
        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] == 'a' && s[i + 1] == 'b') a++;
            else if(s[i] == 'b' && s[i + 1] == 'a') b++;
        }
        //cout << "a " << a << endl;
        //cout << "b " << b << endl; 
        if(a == b){
            cout << s << endl;
        }
        else{
            if(s[0] == 'a') s[0] = 'b';
            else s[0] = 'a';
            cout << s << endl;
        }

    }
}