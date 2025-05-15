#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (j != k && a[i] == a[j] + a[k])
                {
                    x = i + 1;
                    y = j + 1;
                    z = k + 1;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    flag ? cout << x << " " << y << " " << z : cout << "-1";
    return 0;
}