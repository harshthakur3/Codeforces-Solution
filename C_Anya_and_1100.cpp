#include <bits/stdc++.h>
using namespace std;

#define pi pair<int, int>
#define int long long
#define all(x) (x).begin(), (x).end()   

const int MOD = 1000000007;

bool check(string& s, int i)
{
    if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
        return true;
    return false;
}

void solve()
{
    string s; cin >> s;
    int q; cin >> q;
    int n = s.size();
    set<int> exists;
    for (int i = 0; i < n - 3; i++)
        if (check(s, i))
            exists.insert(i);
    while (q--){
        int i; cin >> i; i--;
        char c; cin >> c;
        s[i] = c;
        for (int j = i - 3; j <= i; j++){
            if (j < 0 || j + 3 >= n)
                continue;
            if (exists.find(j) != exists.end())
                exists.erase(j);
            if (check(s, j))
                exists.insert(j);
        }
        if (exists.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}