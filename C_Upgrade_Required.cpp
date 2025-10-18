#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) v[i] = i;
    while(m--){
        int x, y;
        cin >> x >> y;
        int count = 0;
        for(int i = 1; i <= n; i++){
            if(v[i]<= x){
                v[i] = y;
                count++;
            }
        }
        cout << count << endl;
    }
}