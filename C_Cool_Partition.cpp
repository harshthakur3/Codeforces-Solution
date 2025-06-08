#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define mp make_pair
#define eb emplace_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (int)(x).size()
#define len(x) (int)(x).length()
#define sortv(v) sort(all(v))
#define rsortv(v) sort(rall(v))
#define uniq(v) v.erase(unique(all(v)), v.end())
#define rev(v) reverse(all(v))
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const int MAXN = 1e6 + 5;
const double EPS = 1e-9;
const double PI = acos(-1);
#define vi vector<int>
#define vll vector<ll>
#define vd vector<double>
#define vb vector<bool>
#define vs vector<string>
#define vc vector<char>
#define vvi vector<vi>
#define vvll vector<vll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pdi pair<double, int>
#define pdd pair<double, double>
#define vpii vector<pii>
#define vpll vector<pll>
#define mii map<int, int>
#define mll map<ll, ll>
#define msi map<string, int>
#define umii unordered_map<int, int>
#define umll unordered_map<ll, ll>
#define si set<int>
#define sll set<ll>
#define ss set<string>
#define usi unordered_set<int>
#define usll unordered_set<ll>
#define F first
#define S second
#define X first
#define Y second
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define fr(i, n) for (int i = 0; i < n; i++)
#define frr(i, n) for (int i = n - 1; i >= 0; i--)
#define loop(i, a, b) for (int i = a; i <= b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)
#define forc(x, container) for (auto x : container)
#define fore(x, container) for (auto &x : container)
#define input(v, n) fr(i, n) cin >> v[i];
#define output(v) fore(x, v) cout << x << " "; cout << endl;
#define print(v) fore(x, v) cout << x << " "; cout << endl;
#define printv(v) fore(x, v) cout << x << " "; cout << endl;
#define prints(s) cout << s << endl;
#define printa(a, n) fr(i, n) cout << a[i] << " "; cout << endl;
#define scan(x) cin >> x;
#define scanv(v, n) fr(i, n) cin >> v[i];
#define read(x) cin >> x;
#define readv(v, n) fr(i, n) cin >> v[i];
#define write(x) cout << x;
#define writeln(x) cout << x << endl;
#define endl "\n"
#define newl "\n"
#define sp " "
#define tab "\t"
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define yesno(x) cout << (x ? "YES" : "NO") << endl;
#define debug(x) cout << #x << " = " << x << endl;
#define debug2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl;
#define debug3(x, y, z) cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl;
#define here cout << "here" << endl;
#define line cout << "line: " << __LINE__ << endl;
#define trace cout << "trace: " << __func__ << endl;
#define gcd __gcd
#define lcm(a, b) ((a) * (b) / gcd(a, b))
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(min3(a, b, c), d)
#define max4(a, b, c, d) max(max3(a, b, c), d)
#define sqr(x) ((x) * (x))
#define cube(x) ((x) * (x) * (x))
#define mod(x) ((x) % MOD)
#define mod2(x) ((x) % MOD2)
#define add(a, b) ((a + b) % MOD)
#define sub(a, b) ((a - b + MOD) % MOD)
#define mul(a, b) ((a * b) % MOD)
#define checkbit(x, i) ((x) & (1LL << (i)))
#define setbit(x, i) ((x) | (1LL << (i)))
#define clearbit(x, i) ((x) & (~(1LL << (i))))
#define flipbit(x, i) ((x) ^ (1LL << (i)))
#define countbits(x) __builtin_popcountll(x)
#define leadingzeros(x) __builtin_clzll(x)
#define trailingzeros(x) __builtin_ctzll(x)
#define odd(x) ((x) & 1)
#define even(x) (!odd(x))
#define power(a, b) pow(a, b)
#define powermod(a, b, m) (pow(a, b) % m)
#define fast_power(a, b) ({ll res = 1; ll base = a; while(b) { if(b & 1) res *= base; base *= base; b >>= 1; } res;})
#define ceil_div(a, b) ((a + b - 1) / b)
#define floor_div(a, b) (a / b)
#define is_prime(n) ({bool prime = true; if(n <= 1) prime = false; for(int i = 2; i * i <= n; i++) if(n % i == 0) prime = false; prime;})
#define sum_n(n) ((n) * (n + 1) / 2)
#define sum_sq_n(n) ((n) * (n + 1) * (2 * n + 1) / 6)
#define sum_cube_n(n) (sqr(sum_n(n)))
#define factorial(n) ({ll fact = 1; for(int i = 1; i <= n; i++) fact *= i; fact;})
#define digits(n) ({int d = 0; while(n) { d++; n /= 10; } d;})
#define reverse_num(n) ({ll rev = 0; while(n) { rev = rev * 10 + n % 10; n /= 10; } rev;})
#define is_palindrome(n) (n == reverse_num(n))
#define max_element(v) *max_element(all(v))
#define min_element(v) *min_element(all(v))
#define sum_vector(v) accumulate(all(v), 0LL)
#define product_vector(v) accumulate(all(v), 1LL, multiplies<ll>())
#define lower_bound_pos(v, x) (lower_bound(all(v), x) - v.begin())
#define upper_bound_pos(v, x) (upper_bound(all(v), x) - v.begin())
#define binary_search_pos(v, x) binary_search(all(v), x)
#define next_permutation_check(v) next_permutation(all(v))
#define prev_permutation_check(v) prev_permutation(all(v))
#define random_shuffle_v(v) random_shuffle(all(v))
#define sort_unique(v) sortv(v); uniq(v)
#define mem(a, x) memset(a, x, sizeof(a))
#define fill_v(v, x) fill(all(v), x)
#define iota_v(v, x) iota(all(v), x)
#define tc int t; cin >> t; while(t--)
#define cases(x) cout << "Case " << x << ": ";
#define faster_io cin.tie(nullptr)->sync_with_stdio(false);
#define precision(x) cout << fixed << setprecision(x);
#define file_io freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

int solve() {
    int n;
    cin >> n;
    vi a(n);
    fr(i, n) {
        cin >> a[i];
    }
    // lastSeen[x] batayega ki element x next baar kis index pe dikh raha hai
    // agar x dubara nahi aata to default n (1-past-the-end) hoga
    vi lastSeen(n + 1, n);
    vi nextIndex(n);
    frr(i, n) {
        int value = a[i];
        nextIndex[i] = lastSeen[value];
        lastSeen[value] = i;
    }
    int segments = 0;
    int start = 0;
    while (start < n) {
        int end = start;
        while (true) {
            int farthest = 0;

            // har element ke nextIndex me dekho kitna door tak jaana padega
            rep(j, start, end + 1) {
                farthest = max(farthest, nextIndex[j]);
            }
            ++segments; // ek segment complete hua
            // agar end tak pahuch gaye to break karo
            if (farthest >= n) break;
            // nahi to agla segment start karo
            start = end + 1;
            end = farthest;
        }
        break;
    }
    return segments;
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int ans = solve();
        cout << ans << endl;
    }
    return 0;
}