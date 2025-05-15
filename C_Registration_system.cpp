#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    map <string,int>mp;
    while(t--){
        string x;
        cin >> x;
        mp[x]++;
        if(mp[x] == 1){
            cout << "OK" << endl;
        }
        else {
            cout << x << mp[x] - 1 << endl;
        }
        

    }
}