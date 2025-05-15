#include <bits/stdc++.h>
using namespace std;
#define S second
#define F first
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define Sort(v) sort(all(v))
#define Reverse(v) reverse(all(v))
#define print(x) cout << x << endl
#define printws(x) cout << x << " "
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define bitcount __builtin_popcount
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vpi;
typedef long long ll;
typedef unordered_map<int, int> uom;
#define pb push_back
#define pop pop_back
#define loop(n) for (int i = 0; i < n; i++)
#define newl cout << '\n';
/-------------------------------------MATHEMATICAL FUNCTIONS--------------------------------------------/
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b) * b);
}
ll max(ll a, ll b){
    if(a >= b) return a;
    return b;
}
ll min(ll a, ll b){
    if(a <= b) return a;
    return b;
}
const int mod = 1000000007;
int powerOf2(int a){
    int cnt = 0;
    while(a % 2 == 0){
        cnt++;
        a /= 2;
    }
    return cnt;
}
bool compare(pair<char, int> &p1, pair<char, int> &p2)
{
    return p1.F < p2.F;
}
/-------------------------------------WRITE CODE FROM HERE--------------------------------------------/

void K1RT4N()
{
    // Read the input: number of participants, phase durations, and percent reduction.
    int n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    
    // p is the multiplier after the first phase (the plant loses k percent)
    double p = (100.0 - k) / 100.0;
    
    // For each participant, we will compute the maximum plant height possible.
    // We'll store a pair: {final height, participant index}
    vector<pair<double, int>> results;
    for (int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;
        // Two possible orders:
        // Option 1: use speed a in phase 1 and b in phase 2.
        double option1 = a * t1 * p + b * t2;
        // Option 2: use speed b in phase 1 and a in phase 2.
        double option2 = b * t1 * p + a * t2;
        double best = std::max(option1, option2);
        results.push_back({best, i});
    }
    
    // Sort in descending order by final height. If heights are the same, the smaller index comes first.
    sort(results.begin(), results.end(), [](const pair<double,int>& p1, const pair<double,int>& p2){
        if(fabs(p1.first - p2.first) > 1e-9)
            return p1.first > p2.first;
        return p1.second < p2.second;
    });
    
    // Print the final results table:
    // Each line: participant index then the maximum height formatted to exactly two decimals.
    for(auto &entry : results){
        cout << entry.second << " " << fixed << setprecision(2) << entry.first << "\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem has a single test case.
    int t = 1;
    // If multiple test cases exist, you can read t.
    // cin >> t;
    while (t--)
    {
        K1RT4N();
    }    
    return 0;
}
