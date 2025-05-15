#include <bits/stdc++.h>
#define  ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[5] = {0,0,0,0,0};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                a[0]++;
            }
            if (x == 1)
            {
                a[1]++;
            }
            if (x == 2)
            {
                a[2]++;
            }
            if (x == 3)
            {
                a[3]++;
            }
            if (x == 5)
            {
                a[4]++;
            }
            
            
            if (a[0] >= 3 && a[1] >= 1 && a[2] >= 2 && a[3] >= 1 && a[4] >= 1 && ans == 0)
            {
                ans = i+1;                   
            }

            else
            {
                continue;
            }

            
            
            
        }
        cout << ans << endl;
        
    }
    return 0;
}