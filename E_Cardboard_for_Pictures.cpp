#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,c;
        cin>>n>>c;

        vector<ll> vec(n);
        for(int i=0;i<n;i++)
        cin>>vec[i];

        ll low=0,high=1e9;
        while(low<=high)
        {
            ll mid=low+(high-low)/2;
            ll sum=0;
            for(int i=0;i<n;i++)
            {
                sum+=(2*mid+vec[i])*(2*mid+vec[i]);
                if(sum>c)
                break;
            }

            if(sum==c)
            {
                cout<<mid<<endl;
                break;
            }
            else if(sum<c)
            low=mid+1;
            else
            high=mid-1;
        }

    }
}