#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    list<int> lst;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }

    while (q--) {
        int x;
        cin >> x;

        int pos = 1;
        for (auto it = lst.begin(); it != lst.end(); ++it, ++pos) {
            if (*it == x) {
                cout << pos << " ";

                // Move to front
                lst.erase(it);
                lst.push_front(x);
                break;
            }
        }
    }

    return 0;
}
