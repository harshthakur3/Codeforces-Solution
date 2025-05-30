#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0, b = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') a++;
            else b++;
        }
        int c = min(a,b);
        if(c%2) cout << "DA" << endl;
        else cout << "NET" << endl;
    }
}