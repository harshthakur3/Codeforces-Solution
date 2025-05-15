#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100000;
long long oddVal[N+1];

int32_t main() 
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);

   oddVal[0]=0ll;
   oddVal[1]=1ll;
   oddVal[2]=0ll;
   oddVal[3]=1ll;

   for(int i=4;i<=N;i++)
        oddVal[i]=oddVal[i-3]+1ll;
   
   int t;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;

        long long sum=0ll;
        long long oddVals=0ll;
        for(int i=1;i<=n;i++)
        {
            long long ex;
            cin >> ex;

            sum=sum+ex;
            oddVals+=ex%2;

            if(i==1)
                cout << sum << " ";
            else
                cout << sum-oddVal[oddVals] << " ";
        }
        cout << "\n";
   }
   
}