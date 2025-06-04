#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(ceil(sqrt(n))*ceil(sqrt(n)) == n){
            cout << 0 << " " << sqrt(n) << endl;
        }
        else cout << -1 << endl;
    }
}