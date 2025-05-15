#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int count = 0;
        if(a1 >= b1 && a2 > b2 || a1 > b1 && a2 >= b2) count++;
        if(a1 >= b2 && a2 > b1 || a1 > b2 && a2 >= b1) count++;
        cout << count*2 << endl;
    }
}