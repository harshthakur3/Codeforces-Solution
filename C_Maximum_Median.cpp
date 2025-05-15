#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int32_t main() 
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   
   int n,k;
   cin >> n >> k;

   ll ar[n];
   for(int i=0;i<n;i++)
        cin>>ar[i];
   if(n==1)
   {
       cout << ar[0]+k << "\n";
       return 0;
   }
   
   sort(ar,ar+n);
   ll low=ar[n/2];
   ll high=2e9;
   ll ans=1;
   while(low<=high)
   {
       ll mid=(low+high)/2;
       ll req=0;
       for(int i=n/2;i<n;i++)
            req+=std::max(0ll,-ar[i]+mid);
       if(req<=k )
       {
           ans=mid;
           low=mid+1;
       }
       else
            high=mid-1;
   }
   
   cout << ans << "\n";
   
}