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
        bool flag = false;
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }

        for(int i = 1; i <= n - 2; i++){
            if(mp[s[i]] > 1){
                flag = true;
                break;
            }
        }

        if(flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}