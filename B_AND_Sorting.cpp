#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];

    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(i!=arr[i])
        v.push_back(arr[i]);
    }

    int ans=v[0];
    for(int i=1;i<v.size();i++)
    ans=ans&v[i];

    cout<<ans<<endl;
    }
}