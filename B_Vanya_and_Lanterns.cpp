#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, l;
    cin >> n >> l;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    double d = 2*max(a[0], l - a[n - 1]);
    for(int i = 1 ; i < n ; i++){
        if((a[i] - a[i - 1]) > d) d = a[i] - a[i - 1];
    }
    cout <<fixed<<setprecision(10)<< d/2;
}