#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector a(n + 1, 0ll);
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        sort(a.begin() + 1, a.end());
        int ans = 0;
        for (int i = n, len = 0; i >= 1; --i)
        {
            if (a[i] >= x)
                ans++;
            else
            {
                len++;
                if (len * a[i] >= x)
                {
                    ans++;
                    len = 0;
                }
            }
        }
        cout << ans << "\n";
    }
}