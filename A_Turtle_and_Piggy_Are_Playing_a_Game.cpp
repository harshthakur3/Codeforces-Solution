#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int x = 1;
        int count = 0;
        while(x <= r){
            x *= 2;
            count++;
        }
        cout << count - 1 << endl;
    }
}