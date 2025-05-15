#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1), par(n + 1);
    for(int i = 1; i <= n; i++){
        v[i] = i;
        par[i] = i;
    }
    while(q--){
        int x;
        cin >> x;
        if(x == 1){
            int y, z;
            cin >> y >> z;
            par[y] = z;
        }
        else if(x == 2){
            int y, z;
            cin >> y >> z;
            par[y] = z;
            par[z] = y;
        }
        else{
            int a;
            cin >> a;
            cout << par[a] << endl;
        }
    }
}