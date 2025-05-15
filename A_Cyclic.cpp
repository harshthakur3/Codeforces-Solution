#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    int c = n %10;
    n = n /10;
    int b = n % 10;
    n = n / 10;
    int a = n;
    cout << b << c << a << " " << c << a << b;
}