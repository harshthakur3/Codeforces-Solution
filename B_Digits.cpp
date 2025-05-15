#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        cout<<1;
        if(d%3==0 || n>=3) cout<<" "<<3;
        if(d%5==0) cout<<" "<<5;
        if(d%7==0 || n>=3) cout<<" "<<7;
        if(d%9==0 || n>=6) cout<<" "<<9;
        else if(d%3==0 && n>=3) cout<<" "<<9;
        cout<<"\n";
    }
    return 0;
}