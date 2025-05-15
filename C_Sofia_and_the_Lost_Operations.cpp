#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t; cin>>t;
    while(t--)
    {
        long long n,i,m,flag=0;

        cin>>n; long long a[n],b[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        cin>>m; long long d[m];
        for(i=0;i<m;i++) cin>>d[i];

        map<long long,long long>mb,md;
        for(i=0;i<n;i++) if(a[i]!=b[i]) { mb[b[i]]++; }
        for(i=0;i<m;i++) md[d[i]]++;
        for(i=0;i<n;i++) if(md[b[i]]<mb[b[i]]) { flag=5; break; }
        if(flag==5) cout<<"NO"<<endl;
        else
        {
            long long mark=d[m-1];
            for(i=0;i<n;i++)
            {
                if(b[i]==mark) { flag=9; break; }
            }
            if(flag==9) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}