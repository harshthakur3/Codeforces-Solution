#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 200000;  
ll counts[MAXN + 5];
ll diff_arr[MAXN + 5];
void space(int n, int k, const string &s) {
    int lagatar_zero = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            lagatar_zero++;
            if(lagatar_zero >= k){
                cout << "Bob" << endl;
                return;
            }
        }
        else{
            lagatar_zero = 0;
        }
    }
    cout << "Alice" << endl;
    return;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        memset(counts,   0, sizeof(ll) * (n + 2));
        memset(diff_arr, 0, sizeof(ll) * (n + 2));
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= n) counts[x]++;
        }
        for (int m = 0; m <= n; m++) {
            ll need  = counts[m];
            ll allow = n - m;
            if (need > allow) break;
            diff_arr[need] += 1;
            diff_arr[allow + 1] -= 1;
            if (counts[m] == 0) break;
        }

        ll ans = 0;
        vector<ll> hello;
        for (int i = 0; i <= n; i++) {
            ans += diff_arr[i];
            hello.push_back(ans);
        }

        for(int i = 0; i < n; i++){
            cout << hello[i] << " ";
        }
        cout << hello[n];
        cout << '\n';
    }

    return 0;
}
