#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int k = 2;
        bool flag = false;
        for(int i=2;i<=1e3;i++){
            int ans = 1 + i + i*i;
            int pt = i*i;
            while(1){
                if(ans > n){
                    break;
                }
                else if(ans == n){
                    flag = true;
                    break;
                }
                else{
                    pt = pt*i;
                    ans += pt;
                }
            }
            if(flag) break;
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}