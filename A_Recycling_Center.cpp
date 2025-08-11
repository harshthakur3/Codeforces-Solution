#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        long long c;
        cin >> n >> c;
        vector<long long>a(n);
        for(long long &x:a) cin >> x;

        int count =0;
        long long multiply =1;
        sort(a.rbegin(),a.rend());

        for(int i=0; i<n; i++) {
            if((long long)a[i]* multiply > c  ) count++;
            else {
                multiply *=2;
            }
        }

        cout << count << '\n';
    }

    return 0;
}
