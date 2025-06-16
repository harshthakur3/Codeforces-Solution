#include <bits/stdc++.h>
using namespace std;
#define ll long long 
bool isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int c=0;
        bool flag=0;
        for(int i=0;i<6;i++)
        {
            if(isSubstring(s,x))
            {
                flag=1;
                cout << i << endl;
                break;
            }
            else
            x+=x;
        }
        if(flag==0)
        cout << -1 << endl;

    }
}