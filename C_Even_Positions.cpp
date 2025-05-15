#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m = 0;
        string s;
        cin >> n >> s;
        vector<int> v;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '(') v.push_back(i);
            if(s[i] == ')') m += i - v.back(), v.pop_back();
            if(s[i] == '_'){
                if(v.size()) m += i - v.back(), v.pop_back();
                else v.push_back(i);
            }
        }
        cout << m << "\n";
    }
    return 0;
}
