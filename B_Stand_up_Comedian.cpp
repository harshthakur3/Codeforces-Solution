#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a != 0){
            cout << a + min(b,c)*2 + min(a + 1, abs(b - c) + d) << endl;
        }
        else cout << 1 << endl;
    }
}