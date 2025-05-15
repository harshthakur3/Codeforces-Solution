#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c, q;
        cin >> n >> c >> q;
        char ch[200001];
        for (int i = 1; i <= n; i++)
            cin >> ch[i];
        vector<long long> l(200001);
        vector<long long> v(200001);
        v[0] = n;
        for (int i = 1; i <= c;i++)
        {
            long long r;
            cin >> l[i] >> r;
            v[i] = v[i - 1] + r - l[i] + 1;
        }
        while (q--)
        {
            long long k;
            cin >> k;
            while (k > n)
            {
                long long x = lower_bound(v.begin() + 1, v.begin() + 1 + c, k) - v.begin();
                k = k - v[x - 1] + l[x] - 1;
            }
            cout << ch[k] << endl;
            }
    }
    return 0;
}