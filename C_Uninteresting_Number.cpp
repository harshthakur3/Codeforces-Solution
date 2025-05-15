#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum = 0, two = 0, three = 0;

        for (char c : s) {
            sum += c - '0';
            if (c == '2') two++;
            else if (c == '3') three++;
        }

        bool flag = false;

        for (int i = 0; i <= two; i++) {
            for (int j = 0; j <= three; j++) {
                if ((sum + i * 2 + j * 6) % 9 == 0) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
