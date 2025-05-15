#include <bits/stdc++.h>
using namespace std;
void black_reznov(){
    int n;
        cin >> n;
        vector<long long> v(n + 1); 
        v[0] = 0;

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            if (i % 2 == 0) {
                v[i] = -v[i]; 
            }
        }

        vector<long long> pre(n + 1); 
        pre[0] = 0; 

        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + v[i];
        }

        map<long long, int> mp;
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (pre[i] == 0) {
                flag = true;
                break;
            }
            mp[pre[i]]++;
            if (mp[pre[i]] > 1) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    //    black_reznov();
    // aditya's optimized approach :p
    int n , s = 0;
    cin >> n;
    vector<long long>v(n + 1);
    set<long long>se;
    bool flag = false;
    for(int i = 1 ; i < n + 1; i++){
        cin >> v[i];
        if(i%2==0) v[i] *= -1;
        s += v[i];
        if(s == 0){
            flag = true;
            break;
        }
        se.insert(s);

    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        if(se.size() == n){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }
    }
    return 0;
}
