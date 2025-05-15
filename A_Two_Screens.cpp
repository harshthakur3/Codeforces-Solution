#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int i = 0;
        while(s1[i] == s2[i]){
            i++;
        }
        if(i){
            cout << i + 1 + s1.size() - i + s2.size() - i << endl;
        }
        else{
            cout << s1.size() + s2.size() << endl;
        }
    }
}