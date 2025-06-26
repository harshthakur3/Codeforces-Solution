#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int zero = 0;
        int n = s.size();
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != '0') break;
            else{
                zero++;
                s[i] = '*';
            }
        }
        //cout << zero << endl;
        //cout << s <<endl;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != '0' && s[i] != '*'){
                count++;
            }
        }
        //cout << count << endl << endl;
        cout << zero + count - 1 << endl;
    }
}