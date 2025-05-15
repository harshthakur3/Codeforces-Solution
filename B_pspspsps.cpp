#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        int s1 = mp['s'];
        int p1 = mp['p'];
        if(s1 == 1 && s[0] != 's' && p1 > 1){
            cout << "NO" << endl;
        }
        else if(p1 == 1 && s[n - 1] != 'p' && s1 > 1){
            cout << "NO" << endl;
        }
        else if(s1 > 1 && p1 > 1){
            cout << "NO" << endl;
        }
        else if(s1 == 1 && p1 == 1 && (s[0] != 's' && s[n - 1] != 'p')) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}