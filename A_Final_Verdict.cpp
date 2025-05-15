#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        float n, k;
        cin >> n >> k;
        float sum = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
        }
        sum = sum/n;
        if(sum == k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
