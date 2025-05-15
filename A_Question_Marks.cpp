#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i = 0 ; i < s.size(); i++){
            mp[s[i]]++;
        }
        cout << min(n,mp['A']) + min(n,mp['B']) + min(n,mp['C']) + min(n,mp['D'])<< endl;
    }
    return 0;
}
