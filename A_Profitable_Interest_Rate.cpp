#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        if(a >= b){
            cout << a << endl;
        }
        else{
            if(a <= b/2){
                cout << 0 << endl;
            }
            else{
                cout << a - (b - a) << endl;
            }
        }
    }
}