#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int gel = min(a, c);
        int flo = min(b, d);
        if(gel < flo){
            cout << "Flower" << endl;
        }
        else{
            cout << "Gellyfish" << endl;
        }
    }
}