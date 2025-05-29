#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        int ans=0;
        if(d<b)
        cout<<-1<<endl;
        else
        {
            ans+=d-b;
            a+=ans;
            if(a<c)
            cout<<-1<<endl;
            else
            {
                ans+=a-c;
                cout<<ans<<endl;
            }
        }
    }
}