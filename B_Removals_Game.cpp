#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> alice(n),bob(n);
        for(int i=0;i<n;i++) cin>>alice[i];
        for(int i=0;i<n;i++) cin>>bob[i];
        if(alice==bob){
            cout<<"Bob"<<endl;
        }
        else{
            reverse(alice.begin(),alice.end());
            if(alice==bob) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
    }
}