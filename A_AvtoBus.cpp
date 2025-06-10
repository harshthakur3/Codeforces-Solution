#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;

        if(n%2==1 || n<4)
        {
            cout<<-1<<endl;
            continue;
        }

        long long x=n/6+(n%6!=0?1:0);
        long long y=n/4;
        cout<<x<<" "<<y<<endl;
    }
}

