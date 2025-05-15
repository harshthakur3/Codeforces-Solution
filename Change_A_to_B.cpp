#include <bits/stdc++.h>
using namespace std;
int main() {
      int t;
      cin>>t;
      while(t--)
      {
        int a,b,k,ans=0;
        cin>>a>>b>>k;
        if(k>b){
            ans = b - a;
            cout << ans << endl;
        }
        while(b>a){
            if(b%2!=0)
                b--;
            else if(b/k>=a)
                b=b/k+b%k;
            else
            {
                ans+=(b-a);
                break;
            }
            ans++;
        }
            cout<<ans<<endl;
    }
}