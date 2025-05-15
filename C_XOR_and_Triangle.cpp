#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int X;
        cin >> X;
        bool found = false;
        for(int a = X - 1; a >= 1; a--){
            int y = X ^ a;
            if((a + X > y) && (a + y > X) && (X + y > a)){
                cout << a << "\n";
                found = true;
                break;
            }
        }
        if(!found)
            cout << -1 << "\n";
    }
    return 0;
}
