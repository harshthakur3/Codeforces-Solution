#include<bits/stdc++.h>
using namespace std;
int main(){
          #ifdef SOMETHING
    freopen("input.txt", "r", stdin);
    #endif 
    ios_base::sync_with_stdio(false), cin.tie(0);
    long long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        long long n=s.size();
       string c=s+s;
        long long sum=0;
        long long ans=0;
        for(long long i=0;i<2*n;++i){
            if(c[i]=='1') sum++;
            else sum=0;
            ans=max(sum,ans);
        }
        if(ans>n) ans=n;
        if(ans==1 || ans==n){
            cout << 1LL*ans*ans << endl;
            continue;
        }
        if(ans==0){ cout << 0 << endl;continue;}
        sum=ans;
        long long temp=ans;
        while(sum>temp/2){
            ans=max(ans,sum*(temp-sum+1));
            sum--;
        }
        cout << ans << endl;
    }
}