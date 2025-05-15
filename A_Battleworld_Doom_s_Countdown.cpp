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
/*-------------------------------------MATHEMATICAL FUNCTIONS--------------------------------------------*/
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
    while(a%2==0){
        cnt++;
        a /= 2;
    }
    return cnt;
}
bool compare(pair<char, int> &p1, pair<char, int> &p2)
{
    return p1.F < p2.F;
}
/*-------------------------------------WRITE CODE FROM HERE--------------------------------------------*/
void K1RT4N()
{
    int n, k;
    cin >> n >> k;
    
    vector<string> codes(n);
    for (int i = 0; i < n; i++){
        cin >> codes[i];
    }
    
    string correct;
    cin >> correct;
    int correctLen = correct.size();
    
    int countLess = 0, countEqual = 0;
    for(auto &code: codes){
        if(code.size() < correctLen)
            countLess++;
        else if(code.size() == correctLen)
            countEqual++;
    }
    
    int bestWrongAttempts = countLess;
    int bestTime = bestWrongAttempts + (bestWrongAttempts / k) * 7 + 1;
    
    int worstWrongAttempts = countLess + countEqual - 1;
    int worstTime = worstWrongAttempts + (worstWrongAttempts / k) * 7 + 1;
    
    cout << bestTime << " " << worstTime;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;  // Uncomment if multiple test cases
    while (t--)
    {
        K1RT4N();
    }    
    return 0;
}