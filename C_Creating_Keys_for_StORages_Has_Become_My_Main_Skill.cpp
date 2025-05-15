#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int aur = 0, flag = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((k | i) == k && !flag) {
                aur |= i;
                cout << i << " ";
            } else {
                flag = 1;
                cout << 0 << " ";
            }
        }

        if (flag) {
            cout << k << endl; 
        } else {
            if ((aur | (n - 1)) == k) {
                cout << (n - 1) << endl;  
            } else {
                cout << k << endl;  
            }
        }
    }
    return 0;
}
