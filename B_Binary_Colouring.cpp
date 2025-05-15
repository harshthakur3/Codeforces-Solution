#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int>v;
        while (x > 0) {
            if (x % 2 == 0) {
                v.push_back(0);
            } else {
                if ((x & 2) == 0) {
                    v.push_back(1);
                    x -= 1;
                } else {
                    v.push_back(-1);
                    x += 1;
                }
            }
            x /= 2;
        }
        cout << v.size() << endl;
        for (int i = 0; i < v.size() ; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
