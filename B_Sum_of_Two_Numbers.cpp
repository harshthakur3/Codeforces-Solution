#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;

        vector<int> a, b;  
        bool flag = 0;
        while (n > 0) {
            int k = n % 10;
            n /= 10;

            if (k % 2 == 0) {  
                a.push_back(k / 2);
                b.push_back(k / 2);
            } else {  
                if (flag == 0) {
                    a.push_back(k / 2 + 1);
                    b.push_back(k / 2);
                } else {
                    a.push_back(k / 2);
                    b.push_back(k / 2 + 1);
                }
                flag = !flag;  
            }
        }

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        bool leading = true;
        for (int x : a) {
            if (x != 0) leading = false;
            if (!leading) cout << x;
        }
        if (leading) cout << 0;
        cout << " ";

        leading = true;
        for (int x : b) {
            if (x != 0) leading = false;
            if (!leading) cout << x;
        }
        if (leading) cout << 0; 
        cout << endl;
    }
    return 0;
}
