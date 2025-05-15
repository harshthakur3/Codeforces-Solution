#include<bits/stdc++.h>
using namespace std;
int sum(long long int n){
    return (n*(n + 1)/2);
}
void solve(){
    long long int n, x, y;
        cin >> n >> x >> y;
        long long int lcm = x*y/__gcd(x,y);
        long long int a = n/x;
        long long int b = n/y;
        long long int c = n/lcm;
        long long int a1 = a - c;
        long long int b1 = b - c;
        cout << (sum(n) - sum(n - a1)) - sum(b1) << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, a, b;
        cin >> n >> a >> b;
        long long int lc = lcm(a, b);
        long long int a1,n1,n2;
        n1=(n/a)-(n/lc);
        n2=(n/b)-(n/lc);
        a1=(n-n1+1);
        long long int ans = (n1*(2*a1+(n1-1))/2)-(n2*(2+(n2-1))/2);
        cout<<ans<<endl;

    }
    return 0;
}