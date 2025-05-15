#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long t; 
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long x=n*(n+1)/2,y=(n-k)*(n-k+1)/2;
        if((x-y)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}