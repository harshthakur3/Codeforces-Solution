#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0; i<n; i++){
            cin>>arr[i];
        }
        long long time[n]={0};
        for(long long i=0; i<n; i++){
            time[i]=arr[i]+i;
        }
        long long ans=0;
        for(long long i=n-1; i>=0; i--){
            ans=max(ans,time[i]);           
        }
        cout<<ans<<"\n";
       
       
    }
    return 0;
}