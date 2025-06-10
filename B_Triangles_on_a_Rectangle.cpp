#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    long long int t;
    cin>>t;

    while(t--)
    {
        ll int w,h;
        cin>>w>>h;
        vector<int> z(4); 
    for (int a = 0; a < 4; a++) 
    {
        ll int k;
        cin >> k;

        vector<int> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        
        z[a] = v[k-1] - v[0];
    }
        
    ll int w1= max(z[0],z[1]);

    ll int w2= max(z[2],z[3]);

    ll int ans = max( w1*h, w2*w);

    cout<<ans<<endl;
        
    }

    return 0;
}