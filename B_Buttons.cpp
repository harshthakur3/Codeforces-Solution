#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    int ans = 0, prev_pushed = 0;
    for(int i = n; i > 0; i--){
        ans += i + (i - 1)*prev_pushed;
        prev_pushed++;
    }
    cout << ans << endl;
}