#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        bool flag = true;
        for(int i=1;i<n-1;i++)
        {
            
            if(a[i]%gcd(a[i-1],a[i+1]) != 0)
            {
                flag = false;
                break;
            }
            
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}