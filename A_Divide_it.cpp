#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        bool flag = true;
        while(n != 1){
            if(n%2 != 0 && n%3 != 0 && n%5 != 0){
                flag = false;
                break;
            }
            if(n%2 == 0){
                n = n/2;
                count++;
            }
            else if(n%3 == 0){
                n = 2*n/3;
                count++;
            }
            else if(n%5 == 0){
                n = 4*n/5;
                count++;
            }
        }
        if(flag){
            cout << count << endl;
        }
        else cout << -1 << endl;
    }
}