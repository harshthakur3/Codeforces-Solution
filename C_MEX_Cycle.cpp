#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            v[(x + i)%n] = i%2;
        }
        if(abs(x - y)%2 == 0 || n%2 == 1){
            v[x - 1] = 2;
        }
        for(auto it : v){
            cout << it << " ";
        }
        cout << endl;
    }
}