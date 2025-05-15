#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t; cin>>t;
    while(t--)
    { 
        long long n,i; long double d,h; cin>>n>>d>>h;
        long long a[n];
        for(i=0;i<n;i++) cin>>a[i];
        long double area=(long double)((d*h)/2),ans=0;
        long double ratio=(long double)(d/h);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>=h) ans+=area;
            else
            {
                long double hn=h-(a[i+1]-a[i]),dn=ratio*(hn),an;
                an=(long double)((dn*hn)/2);
                ans+=area-an;
            }
        }
        ans+=area;
        cout<<setprecision(14)<<(ans)<<endl;
    }
    return 0;
}