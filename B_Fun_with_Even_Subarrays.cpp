#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){

       int n;
       cin >> n;
       vector<int> v(n);
       for(int i=0;i<n;++i){
        cin >> v[i];
       }
       int ans=0, sum = 1;
       for(int i=n-2;i>=0;--i){
        if(v[n-1]==v[i]) sum++;
        else{
            i-=sum-1;
            sum*=2;
            ans++;
        }
       }
       cout << ans << endl;
    }
}