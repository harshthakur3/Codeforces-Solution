#include<bits/stdc++.h>
using namespace std;
#define long long int
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            int y = 2*n;
        for (int i=1; i<=n; i += 2){
            cout<<i<<" "<<y<<"\n";
            y--;
        }
        for (int i=2; i<n; i += 2){
            cout<<i<<" "<<y<<"\n";
            y--;
        }

        }
    }
}