#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i = 0; i < n ; i++){
            mp[s[i]]++;
        }
        cout << mp['a' - abs('A' - 'a')]  << " " << mp['a'] << endl;
    }
}