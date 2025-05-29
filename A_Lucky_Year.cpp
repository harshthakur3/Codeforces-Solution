#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int n;
    cin >> n;
    string s = to_string(n);
    int p = 1;
    for(int i = 0; i < s.size() - 1; i++){
        p *= 10;
    }
    cout << p - n%p;
}
