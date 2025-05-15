#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a= 0, b = 0;
        bool flag = false;
        int mini = INT_MAX;
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A') a++;
            else b++;
            if(i != 0){
                if(s[i] == 'B' && s[i - 1] == 'B'){
                    flag = true;
                }
            }
            if(s[i] == 'A'){
                count++;
            }
            else{
                mini = min(mini, count);
                count = 0;
            }
        }
        mini = min(mini, count);
        if(b > 0){
            if(s[0] == 'B' || s[s.size() - 1] == 'B' || flag){
                cout << a << endl;
            }
            else{
                cout << a - mini << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }
}