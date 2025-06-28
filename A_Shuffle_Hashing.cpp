//https://codeforces.com/contest/1278/problem/0
#include <bits/stdc++.h>
using namespace std;
int a[26] = {0}, b[26]  = {0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s, h;
        cin >> s >> h;
        if(h.size() < s.size()) {
            cout << "NO" << endl;
            continue;
        }
        bool f = false, f1 = true;
        for(int i = 0; i < 26; i++) {
            a[i] = b[i] = 0;
        }
        for(int i = 0; i < s.size(); i++) {
            a[h[i] - 'a']++;
        }
        for(int i = 0; i < s.size(); i++) {
            b[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(a[i] < b[i])
                f1 = false;
        }
        f = f1;
        f1 = true;
        for(int i = s.size(); i < h.size(); i++) {
            a[h[i] - 'a']++;
            a[h[i - s.size()] - 'a']--;
            if(f == true)
                break;
            f1 = true;
            for(int i = 0; i < 26; i++) {
                if(a[i] < b[i])
                    f1 = false;
            }
            f = f1;
        }
        if(!f)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
