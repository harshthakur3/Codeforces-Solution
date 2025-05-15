#include<bits/stdc++.h>
using namespace std;
#define long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int one, two;
        cin >> one >> two;
        if(one == 0 && two%2 != 0) cout << "NO" << endl;
        else if(one%2 == 1) cout << "NO" << endl;
        else cout <<"YES" << endl;
    }
}