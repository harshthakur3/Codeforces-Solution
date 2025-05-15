#include <bits/stdc++.h>
using namespace std;
void space() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> ans;
    int j = -1;
    for (int i = 0; i < n - 1; i++) {
        if (s[i + 1] == s[i])
            continue;
        int x = i - j;
        int c = ans.size();
        for (int ii = 0; ii < 2 * x; ii++) {
            ans.push_back(i + c + 1);
        }
        j = i;
    } // 3*n
    if (j == -1) {
        cout << "-1\n";
        return;
    }
    int x = n - j - 1;
    for (int ii = 0; ii < 2 * x; ii++) {
        ans.push_back(n + ans.size() - x);
    } // 2*n
    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << '\n';
}
int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        space();
    }
    return 0;
}