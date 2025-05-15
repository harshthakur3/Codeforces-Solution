#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if(b/m >= a) cout << n*a;
    else{
        if(b > a){
            if(n > m){
                cout <<(n/m)*b + a*(n%m);
            }
            else {
                if(n*a < b) cout << n*a;
                else {
                    cout << b;
                }
            }
        }
        else{
            if(n%m == 0){
                cout <<(n/m)*b;
            }
            else{
                cout <<(n/m)*b + b;
            }
        }
    }
}