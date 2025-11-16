#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1), pos(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pos[v[i]] = i;
    }

    int count = 1;
    for (int i = 2; i <= n; i++)
        if (pos[i] < pos[i - 1]) count++;

    while (m--) {
        int a, b;
        cin >> a >> b;
        set<pair<int, int>> s;
        auto add = [&](int x, int y) {
            if (x >= 1 && y <= n) s.insert({x, y});
        };
        add(v[a] - 1, v[a]);
        add(v[a], v[a] + 1);
        add(v[b] - 1, v[b]);
        add(v[b], v[b] + 1);

        for (auto [x, y] : s)
            if (pos[x] > pos[y]) count--;

        swap(v[a], v[b]);
        pos[v[a]] = a;
        pos[v[b]] = b;

        for (auto [x, y] : s)
            if (pos[x] > pos[y]) count++;

        cout << count << '\n';
    }
}
