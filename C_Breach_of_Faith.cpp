#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define imi INT_MIN
#define inf LONG_LONG_MAX
#define ima INT_MAX
#define ll long long
#define inp1(m) cin>>m;
#define inp2(m,n) cin>>m>>n;
#define inp3(m,n,k) cin>>m>>n>>k;
#define alert cout<<"alert"<<endl;
#define vi vector<int>
const int mod=1e9+7;
#define vpi vector<pair<ll int,ll int>>
#define vvi vector<vector<ll int>>
#define si set<ll int>
#define vli vector<long long int>
#define pr2(a,b) cout<<(a)<<" "<<(b)<<endl
#define pr3(a,b,c) cout<<(a)<<" "<<(b)<<" "<<(c)<<endl
#define pr1(a) cout<<(a)<<endl
#define pb push_back
#define pb1 pop_back
#define el endl
#define cel cout<<endl;
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define ain int n; cin>>n; vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define prar(a) for(int i = 0; i < (a).size(); i++){ cout<<a[i]<<" ";  }
#define bin vector<long long int> b(n); for(int i = 0; i < n; i++) cin >> b[i];
#define cy cout << "Yes" << endl;
#define cn cout << "No" << endl;
#define rep(i,a,b) for (int i = (a); i < (b); i++)
#define reprev(j,a,b) for (int j = (a); j >= (b); j--)
#define mp make_pair
#define ff first
#define ss second
void ganesh() {
    ll int n,sum=0;
    cin>>n; vector<ll int> a(2*n);
    vector<ll int > ans (2*n+1);
    for(ll int i=0;i<2*n;i++) cin>>a[i];
    sort(all(a)); int j=2*n-2;
    ans[0]=a[2*n-1];
    for(int i=n-1;i<2*n;i++) sum+=a[i];
    rep(i,0,n-1) sum-=a[i];
    // pr1(sum);
    ans[1]=sum; 
    for(int i=2;i<=2*n;i+=2)  ans[i]=a[j],j--;
    for(int i=3;i<=2*n;i+=2) ans[i]=a[j],j--;
    prar(ans); cel;
}


signed main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    while (t--) {
        ganesh();
    }
    return 0;
}