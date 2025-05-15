#include <bits/stdc++.h>
using namespace std;
long long int calc(long long int n){
    long long int x;
    if(n==0)return 1;
    if(n<10)return n;
    x=max(n%10 * calc(n/10) , 9 *calc(n/10 -1) );
    return x;
}
int main() {
    int n;
    cin >> n;
    cout << calc(n);
}
