#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;

    if(n%2==0){
        cout<<-1<<"\n";
    }else{
        vector<int>ans(n+1);

        

        int curr=n+1;
        ans[1]=1;

        for(int i=2; i<=n; i++){
            curr--;
            ans[i]=curr;
            
        }

        for(int i=1; i<=n; i++){
            cout<<ans[i]<<" ";
        }

        cout<<"\n";
    }
   }
                
                
    return 0;
}