#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ans = 0;
        if(a > m){
            ans += m;
        }
        else{
            ans += a;
        }
        if(b > m){
            ans += m;
        }
        else{
            ans += b;
        }
        int lefta = 0, leftb = 0;
        lefta = m - min(m, a);
        leftb = m - min(m, b);
        ans += min(c , lefta + leftb);
        cout << ans << endl;
    }
}