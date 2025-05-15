#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int a, b , c;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x == 1){
                a = i;
            }
            if(x == 2){
                b = i;
            }
            if(x == n){
                c = i;
            }
        } 
        if((a < b && b < c)  || (c < b && b < a)){
            cout << b << " " << c << endl;
        }
        else if((b < a && a < c) || (c < a && a < b)){
            cout << a << " " << c << endl;
        }
        else cout << 1 << " " << 1 << endl;
        
    }
}