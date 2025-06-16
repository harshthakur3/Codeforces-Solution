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
        vector<int> a(n);
        vector<int> a_(n);

        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>a_[i];

        int l=-1,r=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a_[i])
            {
                r=i;
                if(l==-1)
                l=i;
            }
        }

        while(l-1>=0 && a_[l-1]<=a_[l])
        l--;
        while(r+1<n && a_[r+1]>=a_[r])
        r++;

        cout<<l+1<<" "<<r+1<<endl; 
    }
}