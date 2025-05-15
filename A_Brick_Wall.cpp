#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(m%2 == 0) cout << (m*n)/2 << endl;
        else cout << (n*(m- 1))/2 << endl;
    }
}