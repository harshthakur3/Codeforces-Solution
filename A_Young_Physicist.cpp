#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int x = 0, y = 0, z = 0;
    for(int i = 0; i < n; ++i){
        long long int a;
        cin >> a;
        x += a;
        long long int b;
        cin >> b;
        y += b;
        long long int c;
        cin >> c;
        z += c;
    }
    int p = abs(x) + abs(y) + abs(z);
    if(p == 0) cout << "YES";
    else cout << "NO";
}