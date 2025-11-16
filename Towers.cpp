#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> temp;
    for (int i = 0; i < n; i++) {
        auto it = upper_bound(temp.begin(), temp.end(), v[i]);
        if (it == temp.end())
            temp.push_back(v[i]);
        else
            *it = v[i];
    }

    cout << temp.size() << '\n';
}
