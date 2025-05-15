#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;
        int u = 0, d = 0, r = 0, l = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'U') u++;
            else if(s[i] == 'D') d++;
            else if(s[i] == 'L') l++;
            else if(s[i] == 'R') r++;
        }
        if(x >= 0 && y >= 0) {
            if(u >= y && r >= x) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(x >= 0 && y < 0) {
            if(d >= abs(y) && r >= x) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(x < 0 && y >= 0) {
            if(u >= y && l >= abs(x)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if(x < 0 && y < 0) {
            if(d >= abs(y) && l >= abs(x)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
