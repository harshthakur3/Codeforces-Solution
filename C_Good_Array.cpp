#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
        sum += v[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        sum -= v[i];   
        mp[v[i]]--;   
        if (sum % 2 == 0 && mp[sum / 2] > 0) {
            ans.push_back(i + 1); 
        }

        sum += v[i];   
        mp[v[i]]++;   
    }
    cout << ans.size() << endl;
    for (int idx : ans) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
