#include<bits/stdc++.h>
using namespace std;
#define int long long
void space(){
    int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(b[i] != -1){
                flag = true;
            }
        }
        
        int s = -1;

        for(int i = 0; i < n; i++){
            if(b[i] != -1){
                if(s == -1) s = a[i] + b[i];
                else if(s != a[i] + b[i]){
                    cout << 0 << endl;
                    return;
                }
            }
        }
        if(s == -1){
            sort(a.begin(), a.end());
            cout << k - (a[n - 1] - a[0]) + 1 << endl;
            return;
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > s || s - a[i] > k) {
                cout << 0 << endl;
                return;
            }
        }

        cout << 1 << endl;
}


signed main(){
    int t;
    cin >> t;
    while(t--){
        space();
    }
}