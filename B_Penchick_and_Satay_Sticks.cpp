#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        bool flag = true;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(abs(v[i]-(i+1))>=2){
                flag = false;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO\n";
    }
}
