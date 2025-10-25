#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    if(n < 4 && n != 1) cout << "NO SOLUTION";
    else if (n == 4) cout << 2 << " " << 4 << " " << 1 << " " << 3;
    else if(n%2 == 0){
        int temp = n/2;
        while(temp--){
            cout << n << " ";
            cout << temp + 1 << " ";
            n--;
        }
    }
    else{
        int temp = n/2;
        while(temp--){
            cout << n << " ";
            cout << temp + 1 << " ";
            n--;
        }
        cout << n;
    }
}