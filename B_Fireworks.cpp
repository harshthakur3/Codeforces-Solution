#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a, b, c;
        cin >> a >> b >> c;
        if(a > c + 1 && b > c + 1) cout << 2 << endl;
        else if(a < c && b < c) cout << c/a + c/b + 2 << endl;
        else {
            cout << c/a + c/b + 2 << endl;
        }
        
    }
}