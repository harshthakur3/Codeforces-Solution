#include<iostream>
using namespace std;
int main(){
    long long a;
    cin >> a;
    long long sum = 0;
    while(a > 0){
        sum = sum + a%2;
        a = a/2;
    }
    cout << sum;
}