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
        for(char c: s){
            mp[c]++;
        }
        int odd = 0;
        for(auto it : mp){
            if(it.second%2) odd++;
        }
        
        //cout << odd << endl;

        if(odd > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;

    }
}