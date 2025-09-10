#include <bits/stdc++.h>
using namespace std;

const int N = 30; // 26 letters
vector<int> par(N);

void make(int i) {
    par[i] = i;
}

int find(int v) {
    if (par[v] == v) return v;
    return par[v] = find(par[v]);
}

void Union(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) par[b] = a;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < 26; i++) make(i);

    vector<bool> used(26, false);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (char c : s) used[c - 'a'] = true;

        for (int j = 1; j < s.size(); j++) {
            int u = s[j - 1] - 'a';
            int v = s[j] - 'a';
            Union(u, v);
        }
    }

    set<int> groups;
    for (int i = 0; i < 26; i++) {
        if (used[i]) groups.insert(find(i));
    }

    cout << groups.size() << "\n";
    return 0;
}
