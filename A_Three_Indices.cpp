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
        
        bool check=false;
        int i;
        for(i=1;i<n-1;i++)
        {
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
            {
                check=true;
                break;
            }
        }

        if(check)
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        }
        else
        cout<<"NO"<<endl; 
    }
}