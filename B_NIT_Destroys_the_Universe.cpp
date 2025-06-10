#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
  int n, zero = 0, cons = 0, op = 0;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]]++;
    if (a[i] == 0)
    {
      zero = 1;
    }
  }
  if (zero == 0)
    cout << "1\n";
  else
  {
    if (mp.size() == 1)
      cout << "0\n";
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (a[i] != 0)
        {
          cons++;
          if (cons == n - mp[0])
          {
            cout << "1\n";
            op = 1;
            break;
          }
        }
        else
        {
          cons = 0;
        }
      }
      if (op == 0)
        cout << 2 << "\n";
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}