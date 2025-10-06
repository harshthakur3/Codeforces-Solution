#include <bits/stdc++.h>
using namespace std;
#define int long long

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n, m;
    cin>>n>>m;
    
    int cnt1 = 0;
    int cnt2 = 0;
    int copy = n;
    while (copy%2==0)
    {
        copy/=2;
        cnt1++;
    }
    while (copy%5==0)
    {
        copy/=5;
        cnt2++;
    }
    
    int x = 1;
    
    //cout<<cnt1<<" "<<cnt2<<"\n";
    
    while (true)
    {
        if (cnt1>cnt2 && x*5 <=m)
        {
            x*=5;
            cnt2++;
        }
        else if (cnt2>cnt1 && x*2 <=m)
        {
            x *=2;
            cnt1++;
        }
        else if (cnt1==cnt2 && x*10<=m)
        {
            x*=10;
        }
        else break;
    }
    int val = m/x;
    //cout<<x<<" ";
    cout<<val*x*n<<"\n";
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
        //cout << "Case #" << i << ": ";
        Solve();
    }
    return 0;
}