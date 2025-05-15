#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n), a(n);
        bool flag = true;
        for(int i = 0; i < n ; i++){
            cin >> v[i];
        }
        for(int i = 0; i < n ; i++){
            a[i] = i + 1;
        }
        int l = 0, r = 0;
        while(r < n){
            while(r < n - 1 && v[r] == v[r + 1]){
                r++;
            }
            if(l == r){
                flag = false;
                break;
            }
            else{
                rotate(a.begin() + l, a.begin() + r, a.begin() + r + 1);
                r++;
                l = r;
            }

        }
        if(flag){
            for(int i = 0 ;i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
}