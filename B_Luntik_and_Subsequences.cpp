#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int arr[n];
        
        long long c0=0,c1=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            c1++;
            else if(arr[i]==0)
            c0++;
        }
        cout<<pow(2,c0)*c1<<endl;
        
    }
}