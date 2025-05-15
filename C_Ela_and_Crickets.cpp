#include <bits/stdc++.h>
using namespace std;
#define int long long
void Solve(){
    int n;
    cin>>n;
    int r1, c1, r2, c2, r3, c3;
    cin>>r1>>c1>>r2>>c2>>r3>>c3;
    int a1 = max(r1, max(r2, r3));
    int a2 = min(r1, min(r2, r2));
    int a3 = r1 + r2 + r3 - a1 - a2;
    int b1 = max(c1, max(c2, c3));
    int b2 = min(c1, min(c2, c3));
    int b3 = c1 + c2 + c3 - b1 - b2;
    
    int x, y;
    cin>>x>>y;
    int s1 = a1 + a2 + a3;
    int s2 = b1 + b2 + b3;
    if (s1==4 && s2==4)
    {
        if (x==1 || y==1)
        cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    if (s1==4 && s2==3*n-1)
    {
        if (x==1 || y==n)
        cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    if (s1==3*n-1 && s2==4)
    {
        if (x==n||y==1)
        cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    if (s1==3*n-1 && s2==3*n-1)
    {
        if (x==n||y==n)
        cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
        int p1 = (a1 + a2 + a3)%2;
        int p2 = (b1 + b2 + b3)%2;
        if (x%2==p1 && y%2==p2)
        cout<<"NO\n";
        else 
        cout<<"YES\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        Solve();
    }
    return 0;
}