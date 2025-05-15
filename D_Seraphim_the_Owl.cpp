#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cerr << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<pair<int, int>> diff; // Stores the difference between a[i] and b[i] and their index

        // Calculate the difference and store it along with the index
        for (int i = 0; i < n; i++)
        {
            diff.push_back({a[i] - b[i], i});
        }

        sort(diff.begin(), diff.end()); // Sort in ascending order of differences

        int ans = a[m - 1]; // Initialize ans with the initial position's cost

        // Add the cost of bribing people ahead of Kirill to the total cost
        for (int i = m; i < n; i++)
        {
            ans += min(a[diff[i].second], b[diff[i].second]);
        }

        cout << ans << endl;
    }
}

