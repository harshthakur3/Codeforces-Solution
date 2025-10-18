#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int b = 0, a = 0;
        bool flag = false;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'b') flag = true;
            if(s[i] == 'b' && s[i - 1] == 'a') b++;
        }
        flag = false;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == 'a') flag = true;
            if(s[i] == 'a' && s[i - 1] == 'b') a++;
        }

        cout << min(a, b) << endl;
    }
}