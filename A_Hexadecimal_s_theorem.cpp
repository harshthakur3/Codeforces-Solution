#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    int a = 0;
    int b = 1;
    int sum = 1;
    if(n == 0){
        cout << 0 << " " << 0 << " " << 0;
    }
    else{
        while(sum != n){
            a = b;
            b = sum;
            sum = a + b;
        }
        cout << 0 << " " << a << " " << b;
    }
}
