#include<bits/stdc++.h>
using namespace std;
void solution() {

    int n, a = 0, b = 0, a1 = 0, b1 = 0;
    string s, r;
    cin >> n >> s >> r;
    for (char i : s) a += i == '0', b += i == '1';
    for (char i : r) {
        if (a && b) {
            if (i == '0') b--;
            else a--;
        }
        else return cout << "NO", void();
    }
    cout << "YES";
}
 
signed main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solution();
        cout << '\n';
    }
    return 0;
}