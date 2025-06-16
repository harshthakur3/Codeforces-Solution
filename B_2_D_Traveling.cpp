#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,a,b;
        cin>>n>>k>>a>>b;

        ll arr[n][2];
        for(int i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];

        ll ax=arr[a-1][0];
        ll ay=arr[a-1][1];
        ll bx=arr[b-1][0];
        ll by=arr[b-1][1];

        ll a_major=LLONG_MAX/2;
        ll major_b=LLONG_MAX/2;
        for(int i=0;i<k;i++)
        {
            a_major=min(llabs(arr[i][0]-ax)+llabs(arr[i][1]-ay),a_major);
            major_b=min(llabs(arr[i][0]-bx)+llabs(arr[i][1]-by),major_b);
        }

        cout<<min(a_major+major_b,llabs(ax-bx)+llabs(ay-by))<<endl;
    }
}