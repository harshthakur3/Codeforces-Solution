#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a = log2(n-1);
        a = 1 << a;
        int ans[n];
        int ctr = 0;
        for(int i=n-1; i>=a; i--) ans[ctr++] = i;
        for(int i=0; i<a; i++) ans[ctr++] = i;

        for(int i=0; i<n; i++) cout<<i<<" ";
        cout<<"\n";
    }
}